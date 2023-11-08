#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, a;
    int b = 0;
    getline(cin, s);
    getline(cin, a);
    if (s.length() != a.length())
    {
        cout << "Incomplete answer";
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == a[i])
                b++;
        }
        cout << b;
    }
}