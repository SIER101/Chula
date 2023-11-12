#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, k;
    cin >> n >> m >> k;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        long long int p, s = 0;
        cin >> p;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > p + k)
                break;
            else if (a[i] >= p - k)
                s++;
        }
        cout << s << " ";
    }
}