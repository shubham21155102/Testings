#include <bits/stdc++.h>
using namespace std;
int main(){
long long int x,y,z,w,k,l;
cin>>x;
y=x-(x/5)*5;
z=y-(y/4)*4;
w=z-(z/3)*3;
k=w-(w/2)*2;
l=k-(k/1)*1;
cout<<x/5+y/4+z/3+w/2+k/1<<endl;
return 0;
}