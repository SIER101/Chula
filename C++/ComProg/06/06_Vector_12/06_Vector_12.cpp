#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    v.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        v.push_back(n);
    }
    int i = max(0, (int)v.size() - 15);
    cout << v[i++];
    while (i != v.size())
    {
        cout << "->" << v[i++];
    }
}