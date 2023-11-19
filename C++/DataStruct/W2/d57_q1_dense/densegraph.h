#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__
#include <vector>
using namespace std;
class DenseGraph
{
public:
    DenseGraph() {}
    DenseGraph(int n_in) {}
    DenseGraph(const DenseGraph &G) {}
    void AddEdge(int a, int b) {}
    void RemoveEdge(int a, int b) {}
    bool DoesEdgeExist(int a, int b) const {}
    DenseGraph Transpose() const {}

protected:
    int n;
};
#endif