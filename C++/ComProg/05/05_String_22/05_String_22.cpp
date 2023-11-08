#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    bool e = true;
    if (a.length() > b.length())
    {
        e = false;
        swap(a, b);
    }
    int c = a.length(), d = b.length(), m = 0, f = 0;
    for (int i = -c + 1; i < d; i++)
    {
        int s = 0;
        for (int j = 0; j < c; j++)
        {
            if (j + i < 0 || j + i >= d)
                continue;
            if (a[j] == b[j + i])
                s++;
        }
        if (s > m)
        {
            m = s;
            f = i;
        }
    }
    if (e)
    {
        for (int i = 0; i < f; i++)
            cout << "-";
        for (int i = 0; i < a.length(); i++)
            cout << a[i];
        cout << endl;
        for (int i = 0; i < -f; i++)
            cout << "-";
        for (int i = 0; i < b.length(); i++)
            cout << b[i];
    }
    else
    {
        for (int i = 0; i < -f; i++)
            cout << "-";
        for (int i = 0; i < b.length(); i++)
            cout << b[i];
        cout << endl;
        for (int i = 0; i < f; i++)
            cout << "-";
        for (int i = 0; i < a.length(); i++)
            cout << a[i];
    }
    cout << endl
         << m;
}