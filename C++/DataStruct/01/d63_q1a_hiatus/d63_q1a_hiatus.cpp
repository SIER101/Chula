#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i] = a * 100 + b;
    }
    sort(v.begin(), v.end());
    while (m--)
    {
        cin >> a >> b;
        auto t = upper_bound(v.begin(), v.end(), a * 100 + b);
        if (t == v.begin())
            cout << "-1 -1 ";
        else if (a * 100 + b == *(--t))
            cout << "0 0 ";
        else
            cout << *t / 100 << " " << *t % 100 << " ";
    }
}