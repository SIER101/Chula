#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
using namespace std;
class SparseGraph
{
public:
    SparseGraph() {}
    SparseGraph(int n_in) {}
    SparseGraph(const SparseGraph &G) {}
    void AddEdge(int a, int b) {}
    void RemoveEdge(int a, int b) {}
    bool DoesEdgeExist(int a, int b) const {}
    SparseGraph Transpose() const {}

protected:
};
#endif
