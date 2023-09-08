#include <iostream>
#include <set>
using namespace std;

int main()
{
    int a, i = 0;
    set<int> s;
    while (cin >> a)
    {
        i++;
        if (s.find(a) != s.end())
        {
            cout << i;
            return 0;
        }
        s.insert(a);
    }
    cout << -1;
}