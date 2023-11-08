#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    set<string> s1, s2, s3;
    while (cin >> a)
    {
        cin >> b;
        s1.insert(a);
        s2.insert(b);
    }
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.end()));
    for (auto x : s3)
        cout << x << " ";
    if (s3.size() == 0)
        cout << "None";
}