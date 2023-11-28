#include <iostream>

using namespace std;

int main()
{
    int n, a = 1, b = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        b = (a + b) % 100000007;
        a = (2 * b - a + 100000007) % 100000007;
    }
    cout << (a + 2 * b) % 100000007;
}