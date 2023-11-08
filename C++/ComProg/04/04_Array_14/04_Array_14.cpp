#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    double a[r + 1][c + 1];
    for (int i = 0; i <= r; i++)
        a[i][0] = 0;
    for (int i = 0; i <= c; i++)
        a[0][i] = 0;
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
            a[i][j] += +a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    for (int i = 2; i < r; i++, cout << endl) for (int j = 2; j < c; j++)
            cout << round((a[i + 1][j + 1] + a[i - 2][j - 2] - a[i - 2][j + 1] - a[i + 1][j - 2]) / 9.0 * 100) / 100.0 << " ";
}