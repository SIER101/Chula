#include <iostream>
using namespace std;

int main()
{
    int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y, a = 0;
    cin >> d >> m >> y;
    y -= 543;
    if (((y % 4) == 0) && (((y % 100) != 0) || ((y % 400) == 0)))
        md[1]++;
    a += d;
    for (int i = 0; i < m - 1; i++)
        a += md[i];
    cout << a;
}