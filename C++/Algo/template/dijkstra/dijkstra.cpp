#include <iostream>
#include <limits.h>
using namespace std;

int vNum = 9;
int graph[9][9] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                   {4, 0, 8, 0, 0, 0, 0, 11, 0},
                   {0, 8, 0, 7, 0, 4, 0, 0, 2},
                   {0, 0, 7, 0, 9, 14, 0, 0, 0},
                   {0, 0, 0, 9, 0, 10, 0, 0, 0},
                   {0, 0, 4, 14, 10, 0, 2, 0, 0},
                   {0, 0, 0, 0, 0, 2, 0, 1, 6},
                   {8, 11, 0, 0, 0, 0, 1, 0, 7},
                   {0, 0, 2, 0, 0, 0, 6, 7, 0}};

void printSolution(int dist[])
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < vNum; i++)
        cout << i << " \t\t\t\t" << dist[i] << endl;
}

void dijkstra(int src)
{
    int dist[vNum];
    bool sptSet[vNum]; // if the vertex is in shortest path tree
    for (int i = 0; i < vNum; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
    dist[src] = 0;
    for (int count = 0; count < vNum - 1; count++)
    {
        int min = INT_MAX, min_index;
        for (int v = 0; v < vNum; v++)
        {
            if (sptSet[v] == false && dist[v] <= min)
            {
                min = dist[v];
                min_index = v;
            }
        }
        sptSet[min_index] = true;
        for (int v = 0; v < vNum; v++)
            if (!sptSet[v] && graph[min_index][v]
            && dist[min_index] != INT_MAX
            && dist[min_index] + graph[min_index][v] < dist[v])
                dist[v] = dist[min_index] + graph[min_index][v];
    }
    printSolution(dist);
}

int main()
{
    dijkstra(0);
}
