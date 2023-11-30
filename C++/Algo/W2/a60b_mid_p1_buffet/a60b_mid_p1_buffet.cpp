#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int f, w, n;
    cin >> f >> w >> n;
    vector<int> a(f);
    for (int i = 0; i < f; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    n = -w - 1;
    for (int i = 0; i < f; i++)
    {
        if (a[i] > n + w)
            continue;
        n = a[i] + w;
        ans++;
    }
    cout << ans;
}