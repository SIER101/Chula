#include <iostream>
#include <tuple>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    tuple<double, int, double, double> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> get<2>(a[i]) >> get<3>(a[i]);
        get<1>(a[i]) = i + 1;
        get<0>(a[i]) = sqrt(pow(get<2>(a[i]), 2) + pow(get<3>(a[i]), 2));
    }
    sort(a, a + n);
    cout << "#" << get<1>(a[2]) << ": (" << get<2>(a[2]) << ", " << get<3>(a[2]) << ")";
}