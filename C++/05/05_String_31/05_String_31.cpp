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
        if ('a' <= s1[i] && s1[i] <= 'z')
            s1[i] += 'A' - 'a';
    }
    while (getline(cin, s))
    {
        string s2 = "";
        if (s[0] == 'E')
        {
            s2 = s.substr(2, s.length() - 2);
            int j = 0;
            for (int i = 0; i < s2.length(); i++)
            {
                int a;
                if (s2[i] == '-')
                    a = 10;
                else if (s2[i] == ',')
                    a = 11;
                else
                    a = s2[i] - '0';
                int c[4] = {a / 8, (a / 4) % 2, (a / 2) % 2, a % 2};
                for (int k = 0; k < 4; k++)
                {
                    while (!('A' <= s1[j] && s1[j] <= 'Z'))
                    {
                        cout << s1[j];
                        j = (j + 1) % s1.length();
                    }
                    if (c[k] == 1)
                    {
                        char c = s1[j++] + 'a' - 'A';
                        cout << c;
                    }
                    else if (c[k] == 0)
                        cout << s1[j++];
                }
            }
        }
        else if (s[0] == 'D')
        {
            for (int i = 2; i < s.length(); i++)
            {
                if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
                    s2 += s[i];
            }
            string s3 = "";
            for (int i = 0; i < s2.length(); i++)
            {
                if (('a' <= s2[i] && s2[i] <= 'z') || ('A' <= s2[i] && s2[i] <= 'Z'))
                {
                    s3 += s2[i];
                    if (s3.length() == 4)
                    {
                        cout << charDecoder(s3);
                        s3 = "";
                    }
                }
            }
        }
        cout << endl;
    }
}