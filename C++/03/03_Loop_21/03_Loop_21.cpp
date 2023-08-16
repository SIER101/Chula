#include <iostream>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
                a = 1;
            else if ('a' <= s[i] && s[i] <= 'z')
                b = 1;
            else if ('0' <= s[i] && s[i] <= '9')
                c = 1;
            else
                d = 1;
        }
        cout << ">> ";
        if (s.length() >= 12 && a + b + c + d == 4)
            cout << "strong";
        else if (s.length() >= 8 && a + b + c == 3)
            cout << "weak";
        else
            cout << "invalid";
        cout << endl;
    }
}