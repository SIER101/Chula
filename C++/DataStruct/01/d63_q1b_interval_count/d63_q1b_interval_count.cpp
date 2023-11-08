#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        int p;
        cin >> p;
        cout << upper_bound(v.begin(), v.end(), p + k) - lower_bound(v.begin(), v.end(), p - k) << " ";
    }
}