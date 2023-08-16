#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, b = 0;
    while (true)
    {
        double x;
        cin >> x;
        if (x == -1)
        {
            if (b == 0)
                cout << "No Data";
            else
                cout << round(100.0 * a / b) / 100;
            return 0;
        }
        a += x;
        b++;
    }
}