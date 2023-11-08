#include <iostream>
using namespace std;

bool isInAlphabet(char c)
{
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || c == ' ' || c == '\'')
        return true;
    else
        return false;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        string s2 = "";
        bool b = true, d = true;
        char c = ' ';
        for (int i = 0; i < s.length(); i++)
        {
            if (b && isInAlphabet(s[i]) && i > 0)
            {
                if (isInAlphabet(s[i - 1]))
                    continue;
                c = s[i - 1];
                d = false;
                b = false;
            }
            if (s[i] == c)
            {
                d = !d;
                continue;
            }
            if (d)
                continue;
            s2 += s[i];
        }
        cout << s2 << endl;
    }
}