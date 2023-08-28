#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
            cout << s[i];
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            if ('0' <= s[i - 1] && s[i - 1] <= '9')
                cout << ", " << s[i];
            else
                cout << s[i];
        }
        else if ('0' <= s[i] && s[i] <= '9')
        {
            if ('0' <= s[i - 1] && s[i - 1] <= '9')
                cout << s[i];
            else
                cout << ", " << s[i];
        }
        else if ('A' <= s[i] && s[i] <= 'Z')
            cout << ", " << s[i];
    }
}