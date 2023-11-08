#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string nation[n];
    int price[n];
    for (int i = 0; i < n; i++)
        cin >> nation[i] >> price[i];
    string s;
    cin.ignore();
    getline(cin, s);
    int sum = 0;
    string curNation = s.substr(4, 2);
    for (int i = 1; i < (s.length() + 1) / 7; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (curNation != nation[j] && s.substr(7 * i + 4, 2) == nation[j])
            {
                curNation = nation[j];
                sum += price[j];
            }
        }
    }
    cout << sum;
}