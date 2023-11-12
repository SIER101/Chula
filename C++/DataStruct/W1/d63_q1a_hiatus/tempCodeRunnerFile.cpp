#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        s.insert(a * 12 + b);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        auto ans = s.upper_bound(a * 12 + b);
        if (ans == s.begin())
            cout << "-1 -1 ";
        else
        {
            ans = prev(ans);
            if (a * 12 + b == *ans)
                cout << "0 0 ";
            else
                cout << *ans / 12 << " " << *ans % 12 << " ";
        }
    }
}