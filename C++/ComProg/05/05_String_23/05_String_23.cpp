#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    int m;
    cin >> s >> m;
    int a = (((s[0] - '0') * 26 + (s[1] - 'A')) * 26 + (s[2] - 'A')) * 1000 + stoi(s.substr(4, 3)) + m;
    cout << char('0' + a / 1000 / 26 / 26) << char('A' + (a / 1000 / 26 % 26)) << char('A' + (a / 1000 % 26)) << "-" << setw(3) << setfill('0') << a % 1000;
}