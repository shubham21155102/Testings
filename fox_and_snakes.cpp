#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(i%2==0)
cout<<"#";
}
for(int j=1;j<n;j++)
    cout<<endl;
}
return 0;
}