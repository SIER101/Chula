#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int y;
    cin >> y;
    y = (y - 543) % 100;
    cout << (y + (y / 4) + 11) % 7;
}