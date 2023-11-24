#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin >> n >> a;
    int t[n];
    set<long long> s;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < a; i++)
    {
        long long b;
        cin >> b;
        s.insert(b);
    }
    for (auto x : s)
    {
        cout << x;
        long long left = 0, right = 2e12, time, c;
        while (left <= right)
        {
            time = left + (right - left) / 2;
            c = n;
            for (int i = 0; i < n; i++)
                c += time / t[i];
            if (c == x)
            {
                cout << time << endl;
                break;
            }
            else if (c > x)
                right = time - 1;
            else
                left = time + 1;
        }
        if (c != x)
        {
            cout << time + 1 << endl;
        }
    }
}