#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        m[a]++;
    }
    for (auto x : m)
        v.push_back(x.second);
    sort(v.begin(), v.end(), greater<int>());
    k = min(k, (int)v.size());
    cout << v[k - 1];
}