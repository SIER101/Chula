#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int i = n;
    unordered_set<int> s;
    while (i--)
    {
        int a;
        cin >> a;
        if (a < 0 || a > n)
        {
            printf("NO");
            return 0;
        }
        if (s.find(a) != s.end())
        {
            printf("NO");
            return 0;
        }
        s.insert(a);
    }
    printf("YES");
}