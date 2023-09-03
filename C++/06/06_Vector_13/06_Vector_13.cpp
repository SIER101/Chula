#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter)
{
    vector<string> v;
    string s = "";
    line = delimiter + line + delimiter;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == delimiter)
        {
            if (s != "")
                v.push_back(s);
            s = "";
        }
        else
            s += line[i];
    }
    return v;
}
int main()
{
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0]))
    {
        cout << '(' << e << ')';
    }
}