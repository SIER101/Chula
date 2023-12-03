#include <bits/stdc++.h>
using namespace std;

class Graph {
    int vNum;
public:
    Graph(int vNum);
	vector<bool> visited;
	vector<vector<int>> adj;
	void addEdge(int v, int w);
	void DFS(int v);
};

Graph::Graph(int vNum)
{
	this->vNum = vNum;
	adj.resize(vNum);
	visited.resize(vNum);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph::DFS(int v)
{
	visited[v] = true;
	cout << v << " ";
	for (auto x:  adj[v])
		if (!visited[x])
			DFS(x);
}

int main()
{
	Graph g(6);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	g.addEdge(3, 5);
	g.addEdge(5, 4);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";

	g.DFS(2);

	return 0;
}
