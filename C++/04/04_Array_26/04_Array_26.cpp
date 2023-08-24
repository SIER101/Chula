#include <iostream>
using namespace std;

int main()
{
    int n, k = 0, b;
    cin >> n;
    int a[n * n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[k];
            if (a[k] == 0)
            {
                b = i;
                k--;
            }
            k++;
        }
    }
    int c = 0;
    for (int i = 0; i < n * n - 1; i++)
    {
        for (int j = i + 1; j < n * n - 1; j++)
        {
            if (a[i] > a[j])
                c++;
        }
    }
    if (n % 2 == 1)
    {
        if (c % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        if ((c % 2 == 1 && b % 2 == 0) || (c % 2 == 0 && b % 2 == 1))
            cout << "YES";
        else
            cout << "NO";
    }
}