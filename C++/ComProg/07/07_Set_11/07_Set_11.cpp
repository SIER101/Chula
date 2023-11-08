#include <iostream>
#include <set>
using namespace std;

int main()
{
    string a, b;
    multiset<char> s1, s2;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
            continue;
        if ('A' <= a[i] && a[i] <= 'Z')
            a[i] += 'a' - 'A';
        s1.insert(a[i]);
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == ' ')
            continue;
        if ('A' <= b[i] && b[i] <= 'Z')
            b[i] += 'a' - 'A';
        s2.insert(b[i]);
    }
    if (s1 == s2)
        cout << "YES";
    else
        cout << "NO";
}