#include <bits/stdc++.h>
using namespace std;

void knapsack()
{
    int n = 3, w = 50;
    int value[n] = {60, 100, 120};
    int weight[n] = {10, 20, 30};
    int sum[n + 1][w + 1];
    for (int i = 0; i <= w; i++)
        sum[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (weight[i - 1] + j > w)
                sum[i][j] = sum[i - 1][j];
            else
                sum[i][j] = max(
                    sum[i - 1][j],
                    value[i - 1] + sum[i - 1][j + weight[i - 1]]);
        }
    }
    cout << sum[n][0];
}

int main()
{
    knapsack();
}