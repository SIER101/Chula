#include <iostream>
#include <set>
using namespace std;

int main()
{
    int k, a, sum = 0;
    multiset<int> s;
    cin >> k;
    while (cin >> a)
    {
        if (a > k / 2)
            s.insert(k - a);
        else
            s.insert(a);
    }
    for (auto i = s.begin(); i != s.end(); i++)
        if (s.count(*i) > 1)
        {
            sum++;
            i++;
        }
    cout << sum;
}