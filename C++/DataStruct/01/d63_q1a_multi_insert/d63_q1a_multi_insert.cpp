#include<bits/stdc++.h>
using namespace std;main(){int n,d,p,c;cin>>n>>d>>p>>c;vector<int>v(n);for(int&x:v)cin>>x;v.insert(v.begin()+p,c,d);cout<<"After call multiple_add\nSize = "<<n+c<<'\n';for(int x:v)cout<<x<<' ';}