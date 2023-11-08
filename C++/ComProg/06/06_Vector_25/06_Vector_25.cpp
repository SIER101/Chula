#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    string a, b, c[8] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    vector<pair<string, int>> v;
    while (cin >> a)
    {
        if (a == "q")
            break;
        cin >> b;
        for (int i = 0; i < 8; i++)
        {
            if (c[i] == b)
                v.push_back({a, i});
        }
    }
    while (cin >> a)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (a == v[i].first)
                v[i].second = max(0, v[i].second - 1);
        }
    }
    for (auto x : v)
        cout << x.first << " " << c[x.second] << endl;
}