#include <iostream>
#include <algorithm>

using namespace std;

int n, s = 0;

void solve(int m, int k)
{
    if (m == 0)
        s++;
    for (int i = k; i <= m; i++)
        solve(m - i, i);
}

int main()
{
    cin >> n;
    solve(n, 1);
    cout << s;
}