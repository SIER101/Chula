#include <iostream>
#include <cmath>
using namespace std;

long gcd(long a, long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int d, e, f, g = pow(10, c.length());
    d = stoi(b) * (g - 1) + stoi(c);
    e = (g - 1) * pow(10, b.length());
    f = gcd(d, e);
    cout << (d + stoi(a) * e) / f << " / " << e / f;
}