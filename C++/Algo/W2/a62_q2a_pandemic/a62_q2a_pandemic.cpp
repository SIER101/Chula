#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int r, c, t, arr[500][500], arr2[500][500], ans = 0;
pair<int, int> p[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
queue<tuple<int, int, int>> q;

void spread(int a, int b, int d)
{
    if (arr[a][b] != 3)
        ans++;
    arr[a][b] = 3;
    arr2[a][b] = d;
    for (int i = 0; i < 4; i++)
    {
        int a1 = a + p[i].first, b1 = b + p[i].second;
        if (a1 < r && a1 >= 0 && b1 < c && b1 >= 0 && arr[a1][b1] != 1 && arr[a1][b1] != 2 && d < t)
            q.push({a1, b1, d + 1});
    }
    while (!q.empty())
    {
        tie(a, b, d) = q.front();
        q.pop();
        if (arr[a][b] == 3)
        {
            if (d < arr2[a][b])
                arr2[a][b] = d;
            else
                continue;
        }
        spread(a, b, d);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> r >> c >> t;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] == 1)
                spread(i, j, 0);
    cout << ans;
}