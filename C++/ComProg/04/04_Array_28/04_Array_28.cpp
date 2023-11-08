#include <iostream>
#include <map>
using namespace std;

map<char, int> m;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            m[s[i] + 32]++;
        }
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            m[s[i]]++;
        }
    }
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }
}