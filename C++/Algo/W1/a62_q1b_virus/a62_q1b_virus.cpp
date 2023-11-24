#include <iostream>
#include <set>

using namespace std;

string s;

bool solve(int st, int end, bool r)
{
    if (end - st == 2)
    {
        if (r)
            return s[st] == '1' && s[st + 1] == '0';
        else
            return s[st] == '0' && s[st + 1] == '1';
    }
    int mid = (st + end) / 2;
    if (r)
        return (solve(mid, end, true) || solve(mid, end, false)) && solve(st, mid, true);
    else
        return (solve(st, mid, false) || solve(st, mid, true)) && solve(mid, end, false);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int len2 = 1;
    while (k--)
        len2 *= 2;
    while (n--)
    {
        s = "";
        int d = 0;
        for (int j = 0; j < len2; j++)
        {
            char c;
            cin >> c;
            s += c;
            if (c == '0')
                d++;
            else
                d--;
        }
        if (d != 0)
        {
            cout << "no\n";
            continue;
        }
        if (solve(0, len2, false))
            cout << "yes\n";
        else
            cout << "no\n";
    }
}