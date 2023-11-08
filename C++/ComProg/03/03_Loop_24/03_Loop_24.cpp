#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char a = s[0];
    cout << a;
    int b = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (a == s[i])
            b++;
        else
        {
            a = s[i];
            cout << " " << b << " " << a;
            b = 1;
        }
    }
    cout << " " << b;
}