#include <iostream>

using namespace std;

int n, k;

void solve(int a, int b, int c, string s)
{
    if (a == n)
    {
        if (c >= k)
            cout << s << endl;
        return;
    }
    solve(a + 1, 0, c, s + "0");
    solve(a + 1, b + 1, max(c, b + 1), s + "1");
    return;
}

int main()
{
    cin >> n >> k;
    solve(0, 0, 0, "");
}