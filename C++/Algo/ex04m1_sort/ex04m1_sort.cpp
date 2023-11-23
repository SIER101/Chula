#include <iostream>
#include <vector>

using namespace std;

int a[4], a1[4], a2[4], a3[4];

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        a[v[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i <= a[1])
            a1[v[i]]++;
        else if (i <= a[1] + a[2])
            a2[v[i]]++;
        else
            a3[v[i]]++;
    }
    cout << a2[1] + a2[3] + (a2[1] - min(a2[1], a1[2])) + a3[1];
}