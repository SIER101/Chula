#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        a[i][0] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        cin >> a[b - 1][0] >> a[b - 1][1];
        if (a[b - 1][0] > a[b - 1][1])
            a[b - 1][2] = -1;
        else if (a[b - 1][0] < a[b - 1][1])
            a[b - 1][2] = 1;
        else
            a[b - 1][2] = 0;
    }
    int m;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        bool g = true;
        int b, c, d, mn, f;
        cin >> b >> c;
        if (b > c)
            d = -1;
        else if (b < c)
            d = 1;
        else
            d = 0;
        for (int i = 0; i < n; i++)
        {
            int e;
            if (a[i][0] == -1)
                continue;
            if (a[i][2] == d)
            {
                if (a[i][0] <= b && b <= a[i][1])
                {
                    if (a[i][0] <= c && c <= b)
                        e = 0;
                    else
                        e = abs(c - a[i][1]);
                }
                else if (a[i][0] >= b && b >= a[i][1])
                {
                    if (b >= c && c >= a[i][1])
                        e = 0;
                    else
                        e = abs(c - a[i][1]);
                }
                else
                    e = abs(b - a[i][1]) + abs(c - b);
            }
            else
                e = abs(b - a[i][1]) + abs(c - b);
            if (g)
            {
                mn = e;
                f = i + 1;
                g = false;
            }
            else
            {
                if (mn > e)
                {
                    mn = e;
                    f = i + 1;
                }
            }
        }
        cout << ">> " << f << endl;
    }
}