#include <iostream>
using namespace std;

bool a[10];

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == s[i] - '0')
                a[j] = true;
        }
    }
    bool b = true;
    for (int j = 0; j < 10; j++)
    {
        if (!a[j])
        {
            if (b)
                b = false;
            else
                cout << ", ";
            cout << j;
        }
    }
    if (b)
        cout << "None.";
}