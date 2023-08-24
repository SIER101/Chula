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