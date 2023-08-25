#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b;
    bool condi = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << " ";
        if (a[i] < b)
            condi = false;
        b = a[i];
    }
    cout << endl;
    int c = n, f = 5;
    while (!condi)
    {
        // find max
        int m = a[0], d = 0;
        for (int i = 1; i < c - 1; i++)
        {
            if (m < a[i])
            {
                m = a[i];
                d = i;
            }
        }
        // swapup
        if (d > 0)
        {
            for (int i = 0; i < (d + 1) / 2; i++)
            {
                swap(a[i], a[d - i]);
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        // swapdown
        bool e = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
            {
                c = i - 1;
                for (int j = 0; j < (c + 1) / 2; j++)
                {
                    int k = a[j];
                    a[j] = a[c - j];
                    a[c - j] = k;
                }
                e = false;
                break;
            }
        }
        if (e)
        {
            c--;
            for (int j = 0; j < (n) / 2; j++)
            {
                swap(a[j], a[n - 1 - j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        // check
        condi = true;
        b=a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b)
                condi = false;
            b = a[i];
        }
    }
}