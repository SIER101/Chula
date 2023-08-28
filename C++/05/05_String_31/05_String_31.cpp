#include <iostream>
using namespace std;

char code[12] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', ','};

char charDecoder(string s)
{
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        a *= 2;
        if ('a' <= s[i] && s[i] <= 'z')
            a++;
    }
    return code[a];
}

main()
{
    string s1, s;
    getline(cin, s1);
    for (int i = 0; i < s1.length(); i++)
    {
        if ('A' <= s1[i] && s1[i] <= 'Z')
            s1[i] += 'a' - 'A';
    }
    while (getline(cin, s))
    {
        string s2 = "";
        for (int i = 2; i < s.length(); i++)
        {
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
                s2 += s[i];
        }
        if (s[0] == 'E')
        {
            for (int i = 0; i < s.length(); i++)
            {
                int a;
                if (s[i] == '-')
                    a = 10;
                else if (s[i] == ',')
                    a = 11;
                else
                    a = s[i] - '0';
            }
        }
        else if (s[0] == 'D')
        {
            string s3="";
            for (int i = 0; i < s2.length(); i++)
            {
                if (('a' <= s2[i] && s2[i] <= 'z') || ('A' <= s2[i] && s2[i] <= 'Z'))
                {
                    //
                }
            }
        }
    }
}