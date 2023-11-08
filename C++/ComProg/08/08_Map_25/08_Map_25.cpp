#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<string, vector<string>> m;
    map<string, vector<string>> m2;
    vector<string> v;
    vector<bool> v2;
    int n;
    string id;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a;
        v.push_back(a);
        v2.push_back(false);
        cin >> b;
        while (b != "*")
        {
            m[b].push_back(a);
            m2[a].push_back(b);
            cin >> b;
        }
    }
    cin >> id;
    for (auto x : m2[id])
    {
        for (auto y : m[x])
        {
            if (y == id)
                continue;
            v2[find(v.begin(), v.end(), y) - v.begin()] = true;
        }
    }
    bool d = true;
    for (int i = 0; i < v.size(); i++)
    {
        if (v2[i])
        {
            cout << ">> " << v[i] << endl;
            d = false;
        }
    }
    if (d)
        cout << ">> Not Found";
}