#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double w, h;
    cin >> w >> h;
    double M, H, B;
    M = sqrt(w * h) / 60;
    H = 0.024265 * pow(w, 0.5378) * pow(h, 0.3964);
    B = 0.0333 * pow(w, 0.6157 - 0.0188 * log10(w)) * pow(h, 0.3);
    cout << setprecision(15) << M << endl
         << H << endl
         << B;
}