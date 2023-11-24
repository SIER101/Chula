#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int t[n];
    set<int> s;
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        s.insert(b);
    }
    for (auto x : s)
    {
        cout<<x;
        int left = 0, right = 1000000, time;
        while (left <= right)
        {
            time = left + (right - left) / 2;
            int c = n;
            for (int i = 0; i < n; i++)
                c += time / t[i];
            if (c == x)
            {
                cout << time << endl;
                break;
            }
            else if (c > x)
                right = time - 1;
            else
                left = time + 1;
        }
    }
}