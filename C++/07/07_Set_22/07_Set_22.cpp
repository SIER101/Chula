#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<set<int>> v;
    string s;
    int n = 0;
    while (getline(cin, s))
    {
        string s2 = "";
        v.push_back({});
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (s2 != "")
                    v[n].insert(stoi(s2));
                s2 = "";
            }
            else
                s2 += s[i];
        }
        if (s2 != "")
            v[n].insert(stoi(s2));
        n++;
    }
    set<int> u, in = v[0], d = v[0], temp = {};
    for (auto x : v)
        u.insert(x.begin(), x.end());
    for (int i = 1; i < v.size(); i++, temp = {})
    {
        set_intersection(in.begin(), in.end(), v[i].begin(), v[i].end(), inserter(temp, temp.begin()));
        in = temp;
    }
    for (int i = 1; i < v.size(); i++, temp = {})
    {
        set_difference(d.begin(), d.end(), v[i].begin(), v[i].end(), inserter(temp, temp.begin()));
        d = temp;
    }
    cout << "U: ";
    for (auto x : u)
        cout << x << " ";
    if (u.size() == 0)
        cout << "empty set";
    cout << "\nI: ";
    for (auto x : in)
        cout << x << " ";
    if (in.size() == 0)
        cout << "empty set";
    cout << "\nD: ";
    for (auto x : d)
        cout << x << " ";
    if (d.size() == 0)
        cout << "empty set";
}