#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    y -= 543;
    int n = 31;
    int m2[] = {4, 6, 9, 11};
    for (auto x : m2)
    {
        if (m == x)
        {
            n = 30;
            break;
        }
    }
    if (m == 2)
    {
        n = 28;
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            n = 29;
    }
    d += 15;
    if (d > n)
    {
        d -= n;
        m++;
    }
    if (m > 12)
    {
        m -= 12;
        y++;
    }
    y += 543;
    cout << d << "/" << m << "/" << y;
}