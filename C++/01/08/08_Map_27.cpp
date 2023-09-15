#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, mode;
    char KT[10][4] = {{' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' '}, {'a', 'b', 'c', ' '}, {'d', 'e', 'f', ' '}, {'g', 'h', 'i', ' '}, {'j', 'k', 'l', ' '}, {'m', 'n', 'o', ' '}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v', ' '}, {'w', 'x', 'y', 'z'}};
    while (getline(cin, s))
    {
        cout << ">> ";
        mode = s.substr(0, 3);
        if (mode == "T2K")
        {
            for (int i = 4; i < s.length(); i++)
            {
                if ('A' <= s[i] && s[i] <= 'Z')
                    s[i] += 'a' - 'A';
                bool b = false;
                for (int j = 0; j < 10; j++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        if (s[i] == KT[j][k])
                        {
                            for (int l = 0; l < k + 1; l++)
                                cout << j;
                            cout << " ";
                            b = true;
                            break;
                        }
                    }
                    if (b)
                        break;
                }
            }
        }
        else
        {
            int n, c;
            bool b = false;
            for (int i = 4; i < s.length(); i++)
            {
                if (i == 4 || b)
                {
                    c = s[i] - '0';
                    n = 1;
                    b = false;
                }
                else if (s[i] == ' ')
                {
                    cout << KT[c][n - 1];
                    b = true;
                }
                else
                    n++;
            }
            cout << KT[c][n - 1];
        }
        cout << endl;
    }
}

/*
T2K I am busy.
K2T 444 0 2 6 0 22 88 7777 999
T2K HBD to U
K2T 44 22 3 0 8 666 0 88
*/