#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string inp1;
    vector<pair<pair<int, int>, string>> v1;
    vector<pair<double, int>> v2;
    double s = 0;
    int inp2, t = 0;
    while (true)
    {
        cin >> inp1;
        if (inp1 == "END")
            break;
        cin >> inp2;
        s += inp2;
        v1.push_back({{0, inp2}, inp1});
    }
    s /= 100;
    for (int i = 0; i < v1.size(); i++)
    {
        double a = v1[i].first.second / s;
        t += floor(a);
        v1[i].first.first = floor(a);
        v2.push_back({fmod(a, 1), i});
    }
    sort(v2.begin(), v2.end(), greater<pair<double, int>>());
    int k = 0;
    while (t++ < 100)
        v1[v2[k++].second].first.first++;
    sort(v1.begin(), v1.end(), greater<pair<pair<int, int>, string>>());
    for (auto x : v1)
        if (x.first.first != 0)
            cout << x.second << " " << x.first.first << " " << x.first.second << endl;
}
/*
AA 100000
BB 120000
CC 170000
DD 550
EE 250000
FF 7000
GG 6300
END

ANT 81718
CC 7759
CPK 212676
CRR 4433
CTP 192497
GRE 22047
KK 14438851
KLT 7959
KTP 175182
KVM 10891
MAI 249731
MTM 33558
NTM 10875
PAK 23381
PCC 602645
PCH 59571
PCM 273428
PCP 925349
PCT 134833
PCW 17686
PDT 10690
PJT 1138202
PKK 58010
PKT 57098
PLE 53706
PLG 156493
PLK 10158
PLS 17076
PPC 5022
PPC 8818
PPR 537625
PPT 44131
PRP 3455
PRT 32428
PSK 5534
PSM 177379
PSN 10001
PT 10962522
PTC 9174
PTH 184817
PTM 33770
PTR 67692
RJT 72719
RPD 11010
RPL 33844
RPT 12601
RSC 130147
RTS 4766408
RVT 6172
SD 10410
SKP 5860
SMC 6509
SMP 11816
SRT 351376
TCN 45321
TGK 5561
TKN 35094
TLM 79190
TPD 103472
TPN 13605
TPR 82965
TRT 72988
TSL 23721
TSM 10463
TST 340178
TTM 21022
TTT 201411
END
*/