#include <iostream>
using namespace std;

int main()
{
    float p,k=0,t=1;
    cin>>p;
    do
    {
        k++;
        t*=(365-(k-1))/365.0;
    } while(1-t<p);
    cout<<k;
}