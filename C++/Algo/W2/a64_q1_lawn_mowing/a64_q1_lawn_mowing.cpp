#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, a, b;
    cin >> n >> m >> k;
    vector<int> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1] + k;
    }
    while (m--)
    {
        cin >> a >> b;
        b = upper_bound(v.begin() + a + 1, v.end(), b + v[a]) - v.begin() - 1;
        cout << v[b] - v[a] - (b - a) * k << endl;
    }
}
