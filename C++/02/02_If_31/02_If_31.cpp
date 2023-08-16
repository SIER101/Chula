#include <iostream>
#include <cmath>
using namespace std;

int dayInYear(int d, int m, int y)
{
    int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a = 0;
    if (((y % 4) == 0) && (((y % 100) != 0) || ((y % 400) == 0)))
        md[1]++;
    a += d;
    for (int i = 0; i < m - 1; i++)
        a += md[i];
    return a;
}

int main()
{
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    y1 -= 543;
    y2 -= 543;
    int r, b;
    r = 365 - dayInYear(d1, m1, y1);
    if (((y1 % 4) == 0) && (((y1 % 100) != 0) || ((y1 % 400) == 0)))
        r++;
    b = dayInYear(d2, m2, y2);
    int d = r + 365 * (y2 - y1 - 1) + b;
    double p = sin(2 * M_PI * d / 23), e = sin(2 * M_PI * d / 28), i = sin(2 * M_PI * d / 33);
    cout << d << " " << round(p * 100.0) / 100.0 << " " << round(e * 100.0) / 100.0 << " " << round(i * 100.0) / 100.0;
}