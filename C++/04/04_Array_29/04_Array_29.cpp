#include <iostream>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    int a[n][4];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
        for (int j = 0; j < i; j++)
            if ((a[i][0] < a[j][2] && a[i][1] < a[j][3]) && (a[i][2] > a[j][0] && a[i][3] > a[j][1]))
                m = max(m, ((min(a[i][2], a[j][2]) - max(a[i][0], a[j][0])) * (min(a[i][3], a[j][3]) - max(a[i][1], a[j][1]))));
    }
    if (m == 0)
    {
        cout << "No overlaps";
        return 0;
    }
    cout << "Max overlapping area = " << m << endl;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if ((a[i][0] < a[j][2] && a[i][1] < a[j][3]) && (a[i][2] > a[j][0] && a[i][3] > a[j][1]))
                if ((min(a[i][2], a[j][2]) - max(a[i][0], a[j][0])) * (min(a[i][3], a[j][3]) - max(a[i][1], a[j][1])) == m)
                    cout << "rectangles " << i << " and " << j << endl;
}