#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;
    cin >> n >> a;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    sort(t, t + n);
    for (int i = 0; i < a; i++)
    {
        long long b;
        cin >> b;
        if (b <= n)
        {
            cout << "0\n";
            continue;
        }
        long long left = 0, right = 1e12, time, ans = 0;
        while (left <= right)
        {
            time = (left + right) / 2;
            long long c = n;
            for (int i = 0; i < n; i++)
            {
                if (c >= b)
                    break;
                c += time / t[i];
            }
            if (c >= b)
            {
                ans = time;
                right = time - 1;
            }
            else
                left = time + 1;
        }
        cout << ans << endl;
    }
}