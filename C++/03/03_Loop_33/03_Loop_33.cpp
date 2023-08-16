#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main()
{
    int a, min1 = INT_MAX, max1 = INT_MIN, min2 = INT_MAX, max2 = INT_MIN;
    int b=0;
    while (true)
    {
        cin >> a;
        if (a == -998)
        {
            cout << min1 << " " << max2;
            return 0;
        }
        else if (a == -999)
        {
            cout << min2 << " " << max1;
            return 0;
        }
        else
        {
            if (b%4==0||b%4==3)
            {
                min1 = min(min1, a);
                max1 = max(max1, a);
            }
            else
            {
                min2 = min(min2, a);
                max2 = max(max2, a);
            }
            b++;
        }
    }
}