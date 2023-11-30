#include <bits/stdc++.h>
using namespace std;

class Graph {
	int vNum;
	vector<vector<int>> adj;

public:
	Graph(int vNum);
	void addEdge(int v, int w);
	void BFS(int s);
};

Graph::Graph(int vNum)
{
	this->vNum = vNum;
	adj.resize(vNum);
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}

void Graph::BFS(int s)
{
	vector<bool> visited;
	visited.resize(vNum, false);
	queue<int> queue;
	visited[s] = true;
	queue.push(s);
	while (!queue.empty()) {
		s = queue.front();
		cout << s << " ";
		queue.pop();
		for (auto adjacent : adj[s]) {
			if (!visited[adjacent]) {
				visited[adjacent] = true;
				queue.push(adjacent);
			}
		}
	}
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
	g.addEdge(4, 5);

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	g.BFS(2);

	return 0;
}
