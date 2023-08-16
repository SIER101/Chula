#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    cin >> a;
    double L = 0.0, U = a, x = a / 2.0;
    while (1.0 * abs(a - pow(10, x)) > 1.0 * pow(10, -10) * max(a, pow(10, x)))
    {
        if (pow(10, x) > a)
            U = x;
        else if (pow(10, x) < a)
            L = x;
        x = (U + L) / 2.0;
    }
    cout<<x;
}