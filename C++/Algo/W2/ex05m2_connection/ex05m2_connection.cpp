#include <iostream>
#include <vector>

using namespace std;

bool visited[1001];
vector<int> vec[1001];
int n, e, k, ans = 0, j = 0;

int travel(int a, int b)
{
    visited[a] = true;
    if (b == k)
        return 1;
    int c = 0;
    for (auto x : vec[a])
    {
        if (!visited[x])
            c += travel(x, b + 1);
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> e >> k;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    for (; j < n; j++)
    {
        if (visited[j])
            continue;
        ans = max(ans, travel(j, 0));
        for (int i = 0; i < n; i++)
            visited[i] = false;
    }
    cout << ans;
}