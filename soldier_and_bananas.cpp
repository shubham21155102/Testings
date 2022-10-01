#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int x=a*c*(c+1)/2;
if(b<x)
cout<<x-b<<endl;
else
cout<<0<<endl;
return 0;
}