#include <iostream>
using namespace std;

bool a[10];

int main()
{
    string name[20] = {"Robert", "Dick",
                       "William", "Bill",
                       "James", "Jim",
                       "John", "Jack",
                       "Margaret", "Peggy",
                       "Edward", "Ed",
                       "Sarah", "Sally",
                       "Andrew", "Andy",
                       "Anthony", "Tony",
                       "Deborah", "Debbie"};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        bool b = true;
        for (int j = 0; j < 20; j++)
        {
            if (s == name[j])
            {
                if (j % 2 == 0)
                    cout << name[j + 1];
                else
                    cout << name[j - 1];
                cout << endl;
                b = false;
            }
        }
        if (b)
            cout << "Not found\n";
    }
}