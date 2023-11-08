#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c = a[0], d = 0;
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i];
        if (a[i] > a[i - 1])
        {
            if (a[i] > c)
            {
                for (int j = d + 1; j < i; j++)
                {
                    b[j] = c;
                }
                c = a[i];
                d = i;
            }
            else
            {
                int k = i - 1;
                while (a[k] < a[i])
                {
                    b[k] = a[i];
                    k--;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += b[i] - a[i];
    cout << sum;
}
/*
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n], l[n], r[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    l[0] = a[0], r[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++)
        l[i] = max(l[i - 1], a[i]);
    for (int i = n - 2; i >= 0; i--)
        r[i] = max(r[i + 1], a[i]);
    for (int i = 0; i < n; i++)
        sum += min(l[i], r[i]) - a[i];
    cout << sum;
}
*/