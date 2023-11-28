#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    set<int> s;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    arr[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (auto x : s)
        {
            if (i < x)
                break;
            sum = (sum + arr[i - x]) % 1000003;
        }
        arr[i] = sum;
    }
    cout << arr[n];
}