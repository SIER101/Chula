#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    long long mp[r][c], distance[r][c];
    bool visited[r][c];
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mp[i][j];
            distance[i][j] = -1;
            visited[i][j] = false;
        }
    }
    q.push({mp[0][1], 0, 1});
    q.push({mp[1][0], 1, 0});
    distance[0][0] = 0;
    visited[0][0] = true;
    while (!q.empty())
    {
        int a, b, d;
        tie(a, b, d) = q.top();
        q.pop();
        if (visited[b][d])
            continue;
        visited[b][d] = true;
        pair<int, int> pos[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
        for (int i = 0; i < 4; i++)
        {
            int e = b + pos[i].first, f = d + pos[i].second;
            if (e < 0 || e >= r || f < 0 || f >= c)
                continue;
            if (distance[b][d] == -1)
                distance[b][d] = distance[e][f] + mp[b][d];
            else
                distance[b][d] = min(distance[b][d], distance[e][f] + mp[b][d]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << distance[i][j] << " ";
        cout << endl;
    }
}