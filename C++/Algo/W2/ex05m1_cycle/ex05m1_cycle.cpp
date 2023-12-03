#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> path;
vector<bool> visited;

bool travel(int node, int parent)
{
    visited[node] = true;
    for (auto x : path[node])
    {
        if (!visited[x])
        {
            if (travel(x, node))
                return true;
        }
        else if (x != parent)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, e;
        cin >> n >> e;
        visited = vector<bool>(n);
        path = vector<vector<int>>(n);
        while (e--)
        {
            int a, b;
            cin >> a >> b;
            path[a].push_back(b);
            path[b].push_back(a);
        }
        bool b = true;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (travel(i, -1))
                {
                    b = false;
                    cout << "YES\n";
                    break;
                }
            }
        }
        if (b)
            cout << "NO\n";
    }
}