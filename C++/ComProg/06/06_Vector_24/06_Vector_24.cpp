#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<double, string>> v1;
    vector<double> v2;
    string a;
    while (true)
    {
        double p;
        cin >> a;
        if (a == "END")
            break;
        cin >> p;
        v1.push_back({0, a});
        v2.push_back(p);
    }
    while (cin >> a)
        for (int i = 0; i < v1.size(); i++)
            if (v1[i].second == a)
                v1[i].first -= v2[i];
    sort(v1.begin(), v1.end());
    if (v1[0].first == 0)
    {
        cout << "No Sales";
        return 0;
    }
    for (int i = 0; i < 3; i++)
        if (v1[i].first != 0)
            cout << v1[i].second << " " << -v1[i].first << endl;
}