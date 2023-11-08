#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    float x = xm - xe, y = ym - ye;
    float m = (re - rp) / sqrt(pow(y, 2) + pow(x, 2));
    int xp = round(xe + x * m), yp = round(ye + y * m);
    cout << xp << endl
         << yp;
}