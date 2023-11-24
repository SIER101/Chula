#include <iostream>
#include <algorithm>

using namespace std;

int n, a[101][101], s = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i][i] = 1;
        for (int j = 1; j <= i / 2; j++)
        {
            for (int k = 1; k <= j; k++)
                a[i][j] += a[i - j][k];
        }
        for (int j = i / 2 + 1; j <= i; j++)
        {
            for (int k = 1; k <= i - j; k++)
                a[i][j] += a[i - j][k];
        }
    }
    for (int i = 1; i <= n; i++)
        s += a[n][i];
    cout << s;
}