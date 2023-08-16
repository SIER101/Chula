#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a;
    cin >> a;
    if (a >= 1e9)
    {
        if (a >= 1e10)
            cout << round(a / 1e9) << "B";
        else
            cout << round(10.0 * a / 1e9) / 10.0 << "B";
    }
    else if (a >= 1e6)
    {
        if (a >= 1e7)
            cout << round(a / 1e6) << "M";
        else
            cout << round(10.0 * a / 1e6) / 10.0 << "M";
    }
    else if (a >= 1e3)
    {
        if (a >= 1e4)
            cout << round(a / 1e3) << "K";
        else
            cout << round(10.0 * a / 1e3) / 10.0 << "K";
    }
    else
        cout << a;
}