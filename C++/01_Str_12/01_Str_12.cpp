#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, month[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    cin >> s;
    int d = stoi(s.substr(0, 2)), m = stoi(s.substr(3, 2)), y = stoi(s.substr(6, 4));
    cout << month[m - 1] << " " << d << ", " << y - 543;
}