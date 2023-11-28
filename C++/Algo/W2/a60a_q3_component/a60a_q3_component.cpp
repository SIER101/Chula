#include <iostream>
#include <vector>

using namespace std;

bool visited[10001];
vector<int> vec[10001];

void travel(int a)
{
    visited[a] = true;
    for (auto x : vec[a])
        if (!visited[x])
            travel(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    e = 0;
    for (int i = 1; i <= v; i++)
    {
        if (visited[i])
            continue;
        travel(i);
        e++;
    }
    cout << e;
}