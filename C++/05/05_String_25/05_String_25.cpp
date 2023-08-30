#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int b[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2}, d;
    string a, n;
    while (cin >> a >> n)
    {
        cout << ">> ";
        if (n == "0")
            cout << 1 << endl;
        else
        {
            int c = a[a.length() - 1] - '0';
            if (n.length() == 1)
                d = (n[n.length() - 1] - '0') % (b[c]);
            else
                d = (stoi(n.substr(n.length() - 2, 2))) % (b[c]);
            if (d == 0)
                d = b[c];
            int e = 1;
            for (int i = 0; i < d; i++)
                e = (e * c) % 10;
            cout << e << endl;
        }
    }
}