#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<2*a-1;j++)
        {
            if(j-i>=a) continue;
            else if(i+j==a-1||j-i==a-1||i==a-1) cout<<'*';
            else cout<<'.';
        }
        cout<<endl;
    }
}