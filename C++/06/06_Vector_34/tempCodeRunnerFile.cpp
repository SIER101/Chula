#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int total, time, n, totalTime = 0, k = -1;
    bool nextOrder = false;
    string order;
    cin >> total;
    vector<int> v;
    cin >> order >> n;
    while (--total)
    {
        cin >> order;
        if (order == "next")
        {
            cout << ">> call " << n + ++k << endl;
            nextOrder = true;
            continue;
        }
        if (order == "avg_qtime")
        {
            cout << ">> avg_qtime " << round(totalTime * 100.0 / (k + 1)) / 100.0 << " " << endl;
            continue;
        }
        cin >> time;
        if (order == "new")
        {
            cout << ">> ticket " << n + v.size() << endl;
            v.push_back(time);
        }
        if (order == "order" && nextOrder)
        {
            cout << ">> qtime " << n + k << " " << time - v[k] << endl;
            totalTime += time - v[k];
            nextOrder = false;
        }
    }
}