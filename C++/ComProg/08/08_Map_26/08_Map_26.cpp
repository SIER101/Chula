#include <iostream>
#include <map>
#include <set>

using namespace std;

map<string, set<string>> m;
map<string, int> m2;
set<string> s;

void travel(string a, int d)
{
    if ((m2.count(a) != 0 && m2[a] <= d) || d > 2)
        return;
    s.insert(a);
    for (auto x : m[a])
        travel(x, d + 1);
}

int main()
{
    string a, b;
    while (cin >> a)
    {
        if (cin >> b)
        {
            m[a].insert(b);
            m[b].insert(a);
        }
        else
            break;
    }
    travel(a, 0);
    for (auto x : s)
        cout << x << endl;
}