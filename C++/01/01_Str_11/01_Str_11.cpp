#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int b[12], sum = 0;
    for (int i = 0; i < 12; i++)
    {
        if (i == 1 || i == 5 || i == 10)
            cout << "-";
        cout << a[i];
        b[i] = (int)a[i] - '0';
        sum += (13 - i) * b[i];
    }
    cout << "-" << (11 - sum % 11) % 10;
}