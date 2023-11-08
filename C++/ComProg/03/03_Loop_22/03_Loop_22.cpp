#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool b = true;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            if (b)
                b = false;
            else
                cout << "*";
            cout << i;
            n /= i;
        }
    }
}