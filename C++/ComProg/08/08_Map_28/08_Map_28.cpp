#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    map<string, vector<string>> m;
    for (int i = 0; i < n; i++)
    {
        string s2 = "", song;
        getline(cin, s);
        bool b = true;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == ',')
            {
                song = s2;
                s2 = "";
                j++;
            }
            else
                s2 += s[j];
        }
        m[song].push_back(s2);
    }
    getline(cin, s);
    string s2 = "";
    for (int j = 0; j < s.length() + 1; j++)
    {
        if (s[j] == ',' || j == s.length())
        {
            cout << s2 << " -> ";
            bool b = false;
            for (auto x : m[s2])
            {
                if (b)
                    cout << ", ";
                b = true;
                cout << x;
            }
            s2 = "";
            j++;
            if (!b)
                cout << "Not found";
            cout << endl;
        }
        else
            s2 += s[j];
    }
}