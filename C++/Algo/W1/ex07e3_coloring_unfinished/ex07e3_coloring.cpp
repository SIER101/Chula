#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> path[n];
    int color[n];
    bool visit[n];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        path[a].push_back(b);
        path[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
    }
}