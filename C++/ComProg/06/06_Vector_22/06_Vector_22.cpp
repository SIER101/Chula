#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main()
{
    vector<tuple<int, int, int>> v;
    int a, c, i = 0, m = 0, j = 0;
    bool b = true;
    while (cin >> a)
    {
        if (b || a != c)
        {
            b = false;
            v.push_back({a, i, 1});
            j++;
        }
        else
            get<2>(v[j - 1])++;
        m = max(m, get<2>(v[j - 1]));
        c = a;
        i++;
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        if (get<2>(x) == m)
            cout << get<0>(x) << " --> x[ " << get<1>(x) << " : " << get<1>(x) + get<2>(x) << " ]" << endl;
}