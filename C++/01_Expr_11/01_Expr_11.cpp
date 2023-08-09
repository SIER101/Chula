#include <iostream>
#include <cmath>
using namespace std;

unsigned int fac(int n)
{
    int sum = 1;
    while (n > 0)
        sum *= n--;
    return sum;
}

int main()
{
    cout << (M_PI - fac(10) / pow(8, 8) + pow(log(9.7), (7 / sqrt(71)) - sin(40 * M_PI / 180))) / pow(1.2, pow(2.3, 1.0 / 3));
}