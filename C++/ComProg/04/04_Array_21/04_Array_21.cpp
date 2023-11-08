#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        double b = a[i];
        for (int j = i - 1; j >= 0; j--)
        {
            b = a[j] + 1.0 / b;
        }
        cout << setprecision(10) << b << endl;
    }
}