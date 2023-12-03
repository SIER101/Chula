#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double w, value = 0;
    cin >> w >> n;
    vector<pair<double, pair<double, double>>> vw(n);
    for (int i = 0; i < n; i++)
        cin >> vw[i].second.first;
    for (int i = 0; i < n; i++)
    {
        cin >> vw[i].second.second;
        vw[i].first = vw[i].second.first / vw[i].second.second;
    }
    sort(vw.begin(), vw.end());
    for (; n >= 0 && w > 0; n--)
    {
        if (w < vw[n].second.second)
        {
            value += w * vw[n].first;
            break;
        }
        else
        {
            value += vw[n].second.first;
            w -= vw[n].second.second;
        }
    }
    cout << fixed << setprecision(4) << value;
}
