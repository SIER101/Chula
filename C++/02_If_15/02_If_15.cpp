#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    if (a.length() == 10 && (a.substr(0, 2) == "06" || a.substr(0, 2) == "08" || a.substr(0, 2) == "09"))
        cout << "Mobile number";
    else
        cout << "Not a mobile number";
}