#include <bits/stdc++.h>

using namespace std;

vector<int> v(100001);

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, start;
    cin >> n >> m >> start;
    v[0] = start;
    while (n--)
    {
        int a, s;
        cin >> a >> s;
        v[a] = s;
    }
    int c = start;
    for (int i = 0; i < 100001; i++)
    {
        if (v[i] != 0)
            c = v[i];
        v[i] = v[i - 1] + c;
    }
    while (m--)
    {
        int p, x;
        cin >> p >> x;
        if (p > v[x])
            cout << lower_bound(v.begin() + x + 1, v.end(), p + v[x]) - v.begin() << " ";
        else
            cout << lower_bound(v.begin(), v.begin() + x + 1, p) - v.begin() << " ";
    }
}
