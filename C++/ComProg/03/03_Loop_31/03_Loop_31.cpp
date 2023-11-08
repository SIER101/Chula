#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long m, n, a = 1, b = 1, c = 0,d=1;
    cin >> m >> n;
    a = to_string(m).length();
    b = to_string(n).length();
    if (a == b)
    {
        c = a * (n - m + 1);
    }
    else
    {
        c += a * (pow(10, a) - m);
        for(int i=0;i<a;i++) d*=10;
        for (unsigned long long i = a + 1; i < b; i++)
        {
            c += i * 9 * d;
            d*=10;
        }
        c += b * (n - d + 1);
    }
    cout << c;
}