#include <iostream>
using namespace std;

int main()
{
    string a = "None", id[2], pr[2], c1[2], c2[2];
    float gpax[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> id[i] >> gpax[i] >> pr[i] >> c1[i] >> c2[i];
        if (pr[i] != "A" || c1[i] == "D" || c1[i] == "F" || c2[i] == "D" || c2[i] == "F")
            continue;
        if (a == "None")
            a = id[i];
        else
        {
            if (gpax[0] == gpax[1])
            {
                if (pr[0] == pr[1])
                {
                    if (c1[0] == c1[1])
                    {
                        if (c2[0] == c2[1])
                            a = "Both";
                        if (c2[0] > c2[1])
                            a = id[1];
                    }
                    if (c1[0] > c1[1])
                        a = id[1];
                }
                if (pr[0] > pr[1])
                    a = id[1];
            }
            else if (gpax[0] < gpax[1])
                a = id[1];
        }
    }
    cout<<a;
}