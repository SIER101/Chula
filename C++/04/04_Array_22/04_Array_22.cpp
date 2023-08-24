#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    string b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    cin.ignore();
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'C')
        {
            for (int j = 0; j < n / 2; j++)
                swap(a[j], a[j + n / 2]);
        }
        if (s[i] == 'S')
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                    b[j] = a[j / 2];
                else
                    b[j] = a[j / 2 + n / 2];
            }
            for (int j = 0; j < n; j++)
                a[j] = b[j];
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}