#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    bool b = true;
    while (true)
    {
        int a;
        cin >> a;
        if (a == -1)
            break;
        if (b)
            v.push_back(a);
        else
            v.insert(v.begin(), a);
        b = !b;
    }
    cout << "[";
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (i != v.begin())
            cout << ", ";
        cout << *i;
    }
    cout << "]";
}