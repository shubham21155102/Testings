#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
/*
1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
*/
int x=a+b*c;
int y=a*(b+c);
int z=a*b*c;
int w=(a+b)*c;
int k=a+b+c;
vector<int>v;
v.push_back(x);
v.push_back(y);
v.push_back(z);
v.push_back(w);
v.push_back(k);
sort(v.begin(),v.end());
cout<<v[v.size()-1];
return 0;
}