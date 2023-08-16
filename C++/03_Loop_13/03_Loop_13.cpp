#include <iostream>
#include <string>
using namespace std;

int main()
{
    string w, s, a = "",c=" \"\'(),.";
    getline(cin, w);
    getline(cin, s);
    int i = 0, b = 0;
    while (i < s.length()-w.length()+1)
    {
        while(c.find(s[i])!=string::npos&&i < s.length()-w.length()+1)
        {
            i++;
        }
        int k = true;
        for (int j = 0; j < w.length(); j++)
        {
            if (w[j] != s[i++])
            {
                k = false;
                break;
            }
        }
        if (k)
        {
            if(i+1>=s.length()) b++;
            else if(c.find(s[i])!=string::npos) b++;
        }
        while(c.find(s[i])==string::npos&&i < s.length()-w.length()+1)
        {
            i++;
        }
    }
    cout << b;
}