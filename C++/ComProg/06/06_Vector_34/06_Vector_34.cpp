#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int total, time, n, totalTime = 0, k = -1, l = 0;
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
            cout << ">> avg_qtime " << round(totalTime * 100.0 / l) / 100.0 << " " << endl;
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
            l++;
        }
    }
}
/*
14
reset 301
new 1100
new 1110
next
order 1120
new 1130
next
next
order 1161
avg_qtime
new 1170
next
order 1180
avg_qtime
*/