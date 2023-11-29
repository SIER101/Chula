#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

bool visited[1000];

bool checkCycle(int a, int b)
{
}

int main()
{
    int n;
    cin >> n;
    vector<tuple<int, int, int>> edge;
    vector<int> path[n];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int c;
            cin >> c;
            edge.push_back({c, i, j});
        }
    }
    sort(edge.begin(), edge.end());
    for (auto x : edge)
    {
        int a, b, c;
        tie(a, b, c) = x;
    }
}