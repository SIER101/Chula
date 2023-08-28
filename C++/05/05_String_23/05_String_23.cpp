#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    int m;
    cin >> s >> m;
    int a = (((s[0] - '0') * 26 + (s[1] - 'A')) * 26 + (s[2] - 'A')) * 1000 + stoi(s.substr(4, 3));
    a += m;
    int b = a % 1000;
    a /= 1000;
    char c = 'A' + (a % 26);
    a /= 26;
    char d = 'A' + (a % 26);
    a /= 26;
    char e = '0' + a;
    cout << e << d << c << "-" << setw(3) << setfill('0') << b;
}