#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, string> map1, map2;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        map1[a] = b;
        map2[b] = a;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string a;
        cin >> a;
        if (map1.count(a) > 0)
            cout << map1[a] << endl;
        else if (map2.count(a) > 0)
            cout << map2[a] << endl;
        else
            cout << "Not found\n";
    }
}