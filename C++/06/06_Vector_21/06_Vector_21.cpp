#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s += '$';
    int len = s.length();
    vector<string> v;
    for (int i = 0; i < len; i++)
    {
        string ns = s.substr(i, s.length()) + s.substr(0, i);
        v.push_back(ns);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x[len - 1];
}