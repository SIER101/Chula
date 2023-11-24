#include <iostream>
#include <algorithm>

using namespace std;

int a[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, w, ans = 0;
    cin >> n >> m >> k >> w;
    int p[m], t[k];
    for (int i = 0; i < m; i++)
        cin >> p[i];
    for (int i = 0, h; i < m; i++)
    {
        cin >> h;
        a[p[i]] += h;
        ans += h;
    }
    for (int i = 0; i < k; i++)
        cin >> t[i];
    sort(t, t + k);
    for (int i = 0; i < k; i++)
    {
        for (int j = max(1, t[i] - w); j <= min(n, t[i] + w); j++)
        {
            if (a[j] == 0)
                continue;
            a[j]--;
            ans--;
            break;
        }
    }
    cout << ans;
}