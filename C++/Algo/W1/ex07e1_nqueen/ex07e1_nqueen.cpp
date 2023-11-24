#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans = 0;
vector<int> v, v2, v3;

void solve(int k)
{
    if (k == n)
        ans++;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (find(v.begin(), v.end(), i + k) != v.end())
                continue;
            if (find(v2.begin(), v2.end(), i - k) != v2.end())
                continue;
            if (find(v3.begin(), v3.end(), i) != v3.end())
                continue;
            v.push_back(i + k);
            v2.push_back(i - k);
            v3.push_back(i);
            solve(k + 1);
        }
    }
    v.pop_back();
    v2.pop_back();
    v3.pop_back();
}

int main()
{
    cin >> n;
    solve(0);
    cout << ans;
}