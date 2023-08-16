#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float rd(float n)
{
    return round(n * 1e3) / 1e3;
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float d = sqrt(pow(b, 2) - 4 * a * c);
    float x1 = (-b - d) / (2 * a);
    float x2 = (-b + d) / (2 * a);
    cout << rd(x1) << endl
         << rd(x2);
}