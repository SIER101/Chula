#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int a;
    while (cin >> a)
    {
        if (v.size() == 0)
            v.push_back(a);
        for (auto i = v.begin(); i != v.end() + 1; i++)
        {
            if (i == v.end())
            {
                v.push_back(a);
                break;
            }
            else if (a == *i)
                break;
            else if (a < *i)
            {
                v.insert(i, a);
                break;
            }
        }
    }
    int end = min(10, (int)v.size());
    cout << v.size() << endl;
    for (int i = 0; i < end; i++)
        cout << v[i] << " ";
}