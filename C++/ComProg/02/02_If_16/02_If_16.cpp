#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a == 0)
        cout << "zero\n";
    else if (a > 0)
        cout << "positive\n";
    else
        cout << "negative\n";
    if (a % 2 == 0)
        cout << "even";
    else
        cout << "odd";
}