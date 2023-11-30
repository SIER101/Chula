#include <bits/stdc++.h>
using namespace std;

void coinChange()
{
    int m = 4, total = 20;
    int coins[m] = {9, 6, 5, 1};
    int coinNum[total + 1];
    coinNum[0] = 0;
    for (int i = 1; i <= total; i++)
        coinNum[i] = INT_MAX;
    for (int i = 1; i <= total; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (coins[j] <= i)
            {
                int prev = coinNum[i - coins[j]];
                if (prev != INT_MAX && prev + 1 < coinNum[i])
                    coinNum[i] = prev + 1;
            }
        }
    }
    if (coinNum[total] == INT_MAX)
        cout << -1;
    cout << coinNum[total];
}

int main()
{
    coinChange();
}
