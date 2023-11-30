#include <bits/stdc++.h>
using namespace std;

int vNum = 4;
int graph[4][4] = {{0, 5, INT_MAX, 10},
                   {INT_MAX, 0, 3, INT_MAX},
                   {INT_MAX, INT_MAX, 0, 1},
                   {INT_MAX, INT_MAX, INT_MAX, 0}};

void printSolution()
{
    for (int i = 0; i < vNum; i++)
    {
        for (int j = 0; j < vNum; j++)
        {
            if (graph[i][j] == INT_MAX)
                cout << "INF \t";
            else
                cout << graph[i][j] << "\t";
        }
        cout << endl;
    }
}

void floydWarshall()
{
    for (int k = 0; k < vNum; k++) // i->j = i->k + k->j
    {
        for (int i = 0; i < vNum; i++)
        {
            for (int j = 0; j < vNum; j++)
            {
                if (graph[i][j] > (graph[i][k] + graph[k][j])
                && (graph[k][j] != INT_MAX && graph[i][k] != INT_MAX))
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }
    printSolution();
}

int main()
{
    floydWarshall();
}