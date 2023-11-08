#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<string, int> m;
    map<double, vector<string>> m2;
    map<string, string> m3;
    int n, mm;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        int b;
        cin >> a >> b;
        m[a] = b;
    }
    cin >> mm;
    for (int i = 0; i < mm; i++)
    {
        string id;
        double grade;
        cin >> id >> grade;
        m2[grade].push_back(id);
        for (int j = 0; j < 4; j++)
        {
            string c;
            cin >> c;
            m2[grade].push_back(c);
        }
    }
    for (auto i = m2.rbegin(); i != m2.rend(); i++)
    {
        bool e = false;
        for (int j = 1; j < 5; j++)
        {
            if (e)
                break;
            string d = (i->second)[j];
            if (m[d] == 0)
                continue;
            e = true;
            m[d]--;
            m3[(i->second)[0]] = d;
        }
    }
    for (auto x : m3)
        cout << x.first << " " << x.second << endl;
}