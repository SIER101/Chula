#include <iostream>
#include <vector>

using namespace std;

bool b;
int v, e, c;
vector<bool> visited;
vector<vector<int>> vec;

void travel(int a)
{
    visited[a] = true;
    if (vec[a].size() > 2)
    {
        b = false;
        c = -v;
    }
    if (vec[a].size() == 1)
        c++;
    if (c == 2 || vec[a].size() == 0)
        b = true;
    for (auto x : vec[a])
        if (!visited[x])
            travel(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> v >> e;
    vec.resize(v);
    visited.resize(v);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    e = 0;
    for (int i = 0; i < v; i++)
    {
        b = false;
        c = 0;
        if (visited[i])
            continue;
        travel(i);
        if (b)
            e++;
    }
    cout << e;
}