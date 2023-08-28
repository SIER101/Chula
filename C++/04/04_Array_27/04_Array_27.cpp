#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min1 = INT_MAX, max1 = INT_MIN, min2 = INT_MAX, max2 = INT_MIN;
    for (int i = 0; i < 2 * n; i++)
    {
        int a;
        cin >> a;
        if (i % 4 == 0 || i % 4 == 3)
        {
            min1 = min(min1, a);
            max1 = max(max1, a);
        }
        else
        {
            min2 = min(min2, a);
            max2 = max(max2, a);
        }
    }
    string s;
    cin >> s;
    if (s == "Zig-Zag")
        cout << min1 << " " << max2;
    else if (s == "Zag-Zig")
        cout << min2 << " " << max1;
}