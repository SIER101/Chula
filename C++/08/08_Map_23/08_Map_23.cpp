#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    map<string, int> m;
    vector<pair<int, string>> v;
    string a, b, c;
    while (cin >> a)
    {
        cin >> a >> a >> b;
        stringstream bb(b);
        int i = 0, d = 0;
        while (getline(bb, c, ':'))
        {
            if (i++ == 0)
                d += stoi(c) * 60;
            else
                d += stoi(c);
        }
        m[a] += d;
    }
    for (auto i = m.begin(); i != m.end(); i++)
        v.push_back({i->second, i->first});
    sort(v.begin(), v.end(), greater<pair<int, string>>());
    for (int i = 0; i < min(int(v.size()), 3); i++)
    {
        cout << v[i].second << " --> " << v[i].first / 60 << ":" << v[i].first % 60 << endl;
    }
}