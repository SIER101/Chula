#include <bits/stdc++.h>
#include <map>

using namespace std;

vector<int> v(100001);

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, start;
    cin >> n >> m >> start;
    map<int, int> mp;
    v[0] = start;
    for (int i = 0; i < n; i++)
    {
        int a, s;
        cin >> a >> s;
        mp[a] = s;
    }
    int j = 1, c = start;
    for (auto x : mp)
    {
        for (; j < x.first; j++)
        {
            v[j] = v[j - 1] + c;
        }
        c = x.second;
    }
    for (; j < 100001; j++)
    {
        v[j] = v[j - 1] + c;
    }
    for (int i = 0; i < m; i++)
    {
        int p, x;
        cin >> p >> x;
        int d;
        if (p < v[x])
            d = p;
        else
            d = p + v[x];
        cout << lower_bound(v.begin(), v.end(), d) - v.begin() << " ";
    }
}