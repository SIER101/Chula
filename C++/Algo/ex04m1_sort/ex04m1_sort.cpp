#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            a++;
        if (v[i] == 2)
            b++;
        if (v[i] == 3)
            c++;
    }
    int i = n - 1;
    for (; i >= 0; i--)
    {
        if (c == 0)
            break;
        if (v[i] == 3)
        {
            c--;
            continue;
        }
        int j = 0;
        bool e = false;
        if (v[i] == 2)
        {
            j = a;
            e = true;
        }
        for (; j < i; j++)
        {
            if (v[j] == 3)
            {
                e = false;
                break;
            }
        }
        if (e)
        {
            for (j = 0; j < a; j++)
            {
                if (v[j] == 3)
                    break;
            }
        }
        swap(v[i], v[j]);
        c--;
        d++;
    }
    for (; i >= 0; i--)
    {
        if (b == 0)
            break;
        if (v[i] == 2)
        {
            b--;
            continue;
        }
        int j = 0;
        for (; j < i; j++)
            if (v[j] == 2)
                break;
        swap(v[i], v[j]);
        b--;
        d++;
    }
    cout << d;
}