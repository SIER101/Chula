#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unordered_map<string, vector<string>> m;
    vector<string> v;
    string a, b;
    while (cin >> a)
    {
        cin >> b;
        m[b].push_back(a);
        if (find(v.begin(), v.end(), b) == v.end())
            v.push_back(b);
    }
    for (auto i : v)
    {
        cout << i << ":";
        for (auto x : m[i])
        {
            cout << " " << x;
        }
        cout << endl;
    }
}