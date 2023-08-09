#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    double b = (a[1] + a[2]) / 2;
    cout << round(b * 100.0) / 100;
}