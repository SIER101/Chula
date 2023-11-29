#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

bool visited[1000];

int main()
{
    int n;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> edge[n];
    vector<int> path[n];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int c;
            cin >> c;
            edge[i].push({c, j});
            edge[j].push({c, i});
        }
    }
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
    while (!edge[0].empty())
    {
        q.push({edge[0].top().first, 0, edge[0].top().second});
        edge[0].pop();
    }
    visited[0] = true;
    int numNode = 1, ans = 0;
    while (numNode < n)
    {
        int a, b, c;
        tie(a, b, c) = q.top();
        q.pop();
        if (visited[c])
            continue;
        path[b].push_back(c);
        numNode++;
        ans += a;
        visited[c] = true;
        while (!edge[c].empty())
        {
            q.push({edge[c].top().first, c, edge[c].top().second});
            edge[c].pop();
        }
    }
    cout << ans;
}