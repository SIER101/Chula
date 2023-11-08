#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, string> map;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        map[a] = b;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        bool b = false;
        string a;
        cin >> a;
        if (map.count(a) > 0)
        {
            b = true;
            cout << map[a] << endl;
        }
        else
        {
            for (auto j = map.begin(); j != map.end(); j++)
            {
                if (j->second == a)
                {
                    b = true;
                    cout << j->first << endl;
                }
            }
        }
        if (!b)
        {
            cout << "Not found\n";
        }
    }
}