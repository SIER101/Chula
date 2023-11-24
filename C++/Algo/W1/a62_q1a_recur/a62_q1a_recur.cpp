#include <iostream>

using namespace std;

int matrix[256][256];

void solve(int a, int b, int x, int y)
{
    if (a == 0)
    {
        matrix[x][y] = b;
        return;
    }
    x *= 2, y *= 2;
    solve(a - 1, b, x, y);
    solve(a - 1, b - 1, x, y + 1);
    solve(a - 1, b + 1, x + 1, y);
    solve(a - 1, b, x + 1, y + 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int size = 1 << a;
    solve(a, b, 0, 0);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}