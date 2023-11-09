#include <vector>
#include <algorithm>
using namespace std;

int maxL = 100000;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> v = A;
    bool c[maxL] = {false};
    for (auto x : A)
        c[x] = true;
    for (auto x : B)
        if (!c[x])
            v.push_back(x);
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    bool c[maxL] = {false};
    for (auto x : B)
        c[x] = true;
    for (auto x : A)
        if (c[x])
            v.push_back(x);
    return v;
}
