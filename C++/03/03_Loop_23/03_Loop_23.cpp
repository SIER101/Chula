#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    int k, j = 0;
    cin >> s >> k;
    char c = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
            j++;
        else
        {
            if (j < k)
            {
                while (j--)
                    cout << c;
            }
            c = s[i];
            j = 1;
        }
    }
    if (j < k)
    {
        while (j--)
            cout << c;
    }
    c = s[s.length() - 1];
    j = 1;
}