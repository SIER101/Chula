#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    unsigned long long f, s;
    unordered_map<unsigned long long, unsigned long long> ma;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> s;
        ma[s] = f;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> f >> s;
        if (f == s || ma[ma[f]] == 0 || ma[ma[s]] == 0 || ma[ma[f]] != ma[ma[s]])
            printf("NO\n");
        else
            printf("YES\n");
    }
}

