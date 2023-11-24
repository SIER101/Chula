#include <iostream>
#include <set>

using namespace std;

int n, k;

bool solve(string a)
{
}

int main()
{
    cin >> n >> k;
    int len2 = 1;
    while (k--)
        len2 *= 2;
    for (int i = 0; i < n; i++)
    {
        string s = "";
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
    }
}