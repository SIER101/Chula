#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<string, double> m;
    vector<pair<double, string>> v;
    vector<string> v2;
    int n;
    double b, s = 0;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        m[a] = b;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (m.find(a) == m.end())
            continue;
        double d = m[a] * b;
        bool e = true;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].second == a)
            {
                v[j].first += d;
                e = false;
                break;
            }
        }
        if (e)
            v.push_back({d, a});
        s += d;
    }
    if (s != 0)
    {
        sort(v.begin(), v.end(), greater<pair<double, string>>());
        double max = v[0].first;
        cout << "Total ice cream sales: " << s << "\nTop sales:";
        int i = 0;
        while (v[i].first == max)
            v2.push_back(v[i++].second);
        sort(v2.begin(), v2.end());
        for (auto x : v2)
            cout << " " << x;
    }
    else
        cout << "No ice cream sales";
}