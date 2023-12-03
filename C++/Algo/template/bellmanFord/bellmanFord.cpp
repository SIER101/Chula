#include <bits/stdc++.h>
using namespace std;

void BellmanFord(int graph[][3], int vNum, int eNum, int src)
{
    int dis[vNum];
    for (int i = 0; i < vNum; i++)
        dis[i] = INT_MAX;
    dis[src] = 0;
    for (int i = 0; i < vNum - 1; i++)
    {
        for (int j = 0; j < eNum; j++)
        {
            if (dis[graph[j][0]] != INT_MAX
            && dis[graph[j][0]] + graph[j][2] < dis[graph[j][1]])
                dis[graph[j][1]] = dis[graph[j][0]] + graph[j][2];
        }
    }
    for (int i = 0; i < eNum; i++)
    {
        int x = graph[i][0];
        int y = graph[i][1];
        int weight = graph[i][2];
        if (dis[x] != INT_MAX && dis[x] + weight < dis[y])
            cout << "Graph contains negative weight cycle\n";
    }
    cout << "Vertex Distance from Source\n";
    for (int i = 0; i < vNum; i++)
        cout << i << "\t\t" << dis[i] << endl;
}

int main()
{
    int vNum = 5;
    int eNum = 8;
    int graph[][3] = {{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};
    BellmanFord(graph, vNum, eNum, 0);
}
