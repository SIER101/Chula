#include <iostream>
#include <string>
using namespace std;

int d;

string firstDigit[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string twoDigits[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string secondDigit[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string largeDigit[5] = {"", "thousand", "million", "billion", "trillion"};

string twoDigitstoSting(string s)
{
    if (s[0] == '1')
        return twoDigits[s[1] - '0'];
    else if (s[0] == '0')
        return firstDigit[s[1] - '0'];
    else
    {
        string s2 = secondDigit[s[0] - '0' - 2];
        if (s[1] != '0')
            s2 += " " + firstDigit[s[1] - '0'];
        return s2;
    }
}

string threeDigitstoSting(string s)
{
    string s2 = "";
    if (s == "000")
    {
        d--;
        return "";
    }
    if (s[0] != '0')
        s2 += firstDigit[s[0] - '0'] + " hundred ";
    s2 += twoDigitstoSting(s.substr(1, 2)) + " ";
    s2 += largeDigit[d--] + " ";
    return s2;
}

int main()
{
    string n;
    cin >> n;
    if (n == "0")
    {
        cout << "zero";
        return 0;
    }
    int len = n.length();
    d = (len - 1) / 3;
    if (len % 3 != 0)
        for (int i = 0; i < 3 - len % 3; i++)
            n = '0' + n;
    for (int i = 0; i < (len + 2) / 3; i++)
        cout << threeDigitstoSting(n.substr(3 * i, 3));
}