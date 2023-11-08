#include <iostream>
using namespace std;

int main()
{
    string s;
    string ballOrder = "YGNBPK";
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        bool theEnd = false, theStart = false;
        bool b = false, b2 = false, isR = false;
        // b2 mean we already output "wrong_input"
        int j = 0, score = 0;
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (theEnd)
            {
                cout << "WRONG_INPUT\n";
                b2 = true;
                break;
            }
            if (s[i] == ' ')
                continue;
            else if (s[i] == 'R')
            {
                if (theStart)
                {
                    cout << "WRONG_INPUT\n";
                    b2 = true;
                    break;
                }
                if (b)
                {
                    cout << "WRONG_INPUT\n";
                    b2 = true;
                    break;
                }
                else
                {
                    isR = true;
                    score++;
                    b = true;
                    j = 0;
                }
            }
            else
            {
                if (i == 0)
                {
                    cout << "WRONG_INPUT\n";
                    b2 = true;
                    break;
                }
                bool b3 = true;
                for (int k = 0; k < 6; k++)
                {
                    if (s[i] == ballOrder[k])
                    {
                        score += k + 2;
                        b3 = false;
                        break;
                    }
                }
                if (b3) // something not in YGNBPK
                {
                    cout << "WRONG_INPUT\n";
                    b2 = true;
                    break;
                }
                if (b)
                {
                    j = 0;
                    b = false;
                    continue;
                }
                else
                {
                    if (j >= 11)
                    {
                        cout << "WRONG_INPUT\n";
                        b2 = true;
                        break;
                    }
                    else if (s[i] == ballOrder[j])
                    {
                        if (s[i] == 'Y')
                            theStart = true;
                        if (s[i] == 'K')
                            theEnd = true;
                        j++;
                    }
                    else
                    {
                        cout << "WRONG_INPUT\n";
                        b2 = true;
                        break;
                    }
                }
            }
        }
        if (b2)
            continue;
        else
            cout << score << endl;
    }
}