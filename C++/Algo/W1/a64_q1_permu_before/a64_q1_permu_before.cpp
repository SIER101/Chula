#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v;
vector<bool> b;

void solve(int a, string s)
{
    if (a == n)
    {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i])
            continue;
        if (v[i] != -1)
            if (!b[v[i]])
                continue;
        b[i] = true;
        solve(a + 1, s + to_string(i) + " ");
        b[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    cin >> n >> m;
    v = vector<int>(n, -1);
    b = vector<bool>(n, false);
    while (m--)
    {
        int a, c;
        cin >> a >> c;
        v[c] = a;
    }
    solve(0, "");
}