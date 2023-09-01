#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> s;
    string a, c;
    int b, d = 0, len = 0;
    while (true)
    {
        cin >> a;
        if (a == "END")
            break;
        s.push_back(a);
        len = max(len, (int)a.length());
    }
    if (s.size() == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        b = d;//เริ่มบวกด้วยตัวทด
        for (auto j : s)//วนลูปจากตัวแรกvectorถึงตัวท้าย
        {
            if (j.length() - 1 < i)//ถ้าไม่มีหลักพอให้บวกก็ข้าม
                continue;
            b += j[(int)j.length() - i - 1] - '0';//บวกเลขหลักนั้น
        }
        string e = to_string(b);//เปลี่ยนเป็นstring
        c += e[e.length() - 1];//บวกหลักท้าย
        d = b / 10;//เก็บตัวทด
    }
    if (d != 0)
    {
        string e = to_string(d);
        for (int i = 0; i < e.length(); i++)
            cout << e[i];
    }
    for (int i = (int)c.length() - 1; i >= 0; i--)
        cout << c[i];
}