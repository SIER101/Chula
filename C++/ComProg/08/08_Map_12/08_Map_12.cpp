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
        string a, b, c;
        cin >> a >> b >> c;
        map1[a + " " + b] = c;
        map2[c] = (a + " " + b);
    }
    int m;
    cin >> m;
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        string a;
        getline(cin, a);
        cout << a << " --> ";
        if (map1.count(a) > 0)
            cout << map1[a] << endl;
        else if (map2.count(a) > 0)
            cout << map2[a] << endl;
        else
            cout << "Not found\n";
    }
}