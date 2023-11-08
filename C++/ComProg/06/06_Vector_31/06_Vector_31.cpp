#include <iostream>
#include <vector>
using namespace std;

int r[5], c[5], d[2];

int main()
{
    r[2] = 1, c[2] = 1, d[0] = 1, d[1] = 1;
    string a[5][5], b, col = "BINGO";
    vector<string> v;
    for (int i = 0; i < 5; i++)
        cin >> b;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    int k = 0;
    bool e = true;
    while (cin >> b && e)
    {
        bool f = false;
        k++;
        for (auto x : v)
            if (x == b)
            {
                f = true;
                break;
            }
        if (f)
            continue;
        v.push_back(b);
        int ci = col.find(b[0]);
        if (ci != string::npos)
            for (int i = 0; i < 5; i++)
                if (a[i][ci] == b.substr(1, b.length() - 1))
                {
                    r[i]++, c[ci]++;
                    if (i == ci)
                        d[0]++;
                    if (i + ci == 4)
                        d[1]++;
                }
        for (int i = 0; i < 5; i++)
        {
            if (r[i] == 5)
            {
                if (e)
                {
                    cout << k << endl;
                    e = !e;
                }
                cout << col[0] << a[i][0];
                for (int j = 1; j < 5; j++)
                    if (i != 2 || j != 2)
                        cout << ", " << col[j] << a[i][j];
                cout << endl;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (c[i] == 5)
            {
                if (e)
                {
                    cout << k << endl;
                    e = !e;
                }
                cout << col[i] << a[0][i];
                for (int j = 1; j < 5; j++)
                    if (i != 2 || j != 2)
                        cout << ", " << col[i] << a[j][i];
                cout << endl;
            }
        }
        if (d[0] == 5)
        {
            if (e)
            {
                cout << k << endl;
                e = !e;
            }
            cout << col[0] << a[0][0];
            for (int j = 1; j < 5; j++)
                if (j != 2)
                    cout << ", " << col[j] << a[j][j];
            cout << endl;
        }
        if (d[1] == 5)
        {
            if (e)
            {
                cout << k << endl;
                e = !e;
            }
            cout << col[0] << a[4][0];
            for (int j = 1; j < 5; j++)
                if (j != 2)
                    cout << ", " << col[j] << a[4 - j][j];
            cout << endl;
        }
    }
}