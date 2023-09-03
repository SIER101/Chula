#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a;
    vector<pair<pair<int, int>, vector<int>>> v;
    if (s == "first")
        while (cin >> a)
        {
            bool b = true;
            for (int i = 0; i < v.size(); i++)
                if (-v[i].first.first + a <= 100)
                {
                    v[i].first.first -= a;
                    for (auto j = v[i].second.begin(); j != v[i].second.end() + 1; j++)
                    {
                        if (*j >= a || j == v[i].second.end())
                        {
                            v[i].second.insert(j, a);
                            break;
                        }
                    }
                    v[i].first.second++;
                    b = false;
                    break;
                }
            if (b)
                v.push_back({{-a, 1}, {a}});
        }
    else if (s == "best")
    {
        while (cin >> a)
        {
            bool b = true;
            int m = 0, k;
            for (int i = 0; i < v.size(); i++)
                if (-v[i].first.first + a <= 100)
                {
                    if (m < -v[i].first.first + a)
                    {
                        m = -v[i].first.first + a;
                        k = i;
                    }
                    b = false;
                }
            if (b)
                v.push_back({{-a, 1}, {a}});
            else
            {
                v[k].first.first -= a;
                v[k].first.second++;
                for (auto j = v[k].second.begin(); j != v[k].second.end() + 1; j++)
                {
                    if (*j >= a || j == v[k].second.end())
                    {
                        v[k].second.insert(j, a);
                        break;
                    }
                }
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        for (auto y : x.second)
            cout << y << " ";
        cout << endl;
    }
}