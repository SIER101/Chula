#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v;
queue<int> q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n >> a;
    q.push(a);
    while (!q.empty())
    {
        int i = q.front();
        v.push_back(i);
        q.pop();
        i *= 2;
        if (++i < n)
            q.push(i);
        if (++i < n)
            q.push(i);
    }
    cout << v.size() << endl;
    for (auto x : v)
        cout << x << " ";
}