#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, double> m;
    m["THB"] = 1;
    int n, b;
    cin >> n;
    string c, d;
    for (int i = 0; i < n; i++)
    {
        double a;
        cin >> c >> a;
        m[c] = a;
    }
    cin >> b >> c;
    cout << b << " " << c;
    while (cin >> d)
    {
        b = int(b * m[c] / m[d]);
        c = d;
        cout << " -> " << b << " " << c;
    }
}