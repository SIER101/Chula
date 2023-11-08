#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s += ' ';
    string a[s.length()];
    int n = 0;
    string s1 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            a[n] = s1;
            s1 = "";
            n++;
        }
        else
            s1 += s[i];
    }
    string c = "aeiou";
    bool b = false;
    s1 = "";
    string s2 = "", s3 = "", s4 = "";
    for (int i = 0; i < a[0].length(); i++)
    {
        if (c.find(a[0][i]) != string::npos)
            b = true;
        if (b)
            s4 += a[0][i];
        else
            s1 += a[0][i];
    }
    b = false;
    for (int i = 0; i < a[n - 1].length(); i++)
    {
        if (c.find(a[n - 1][i]) != string::npos)
            b = true;
        if (b)
            s2 += a[n - 1][i];
        else
            s3 += a[n - 1][i];
    }
    cout << s1 << s2 << " ";
    for (int i = 1; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << s3 << s4;
}