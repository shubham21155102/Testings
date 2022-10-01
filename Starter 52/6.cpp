#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a=1,b=1;

    int n,m,x,y;
    cin>>n>>m>>x>>y;

   if((n-1)&1 and (m-1)&1 and (n-1)<=x and (m-1)<=y)
   cout<<"YES"<<endl;
   else if((n-1)%2==0 and (m-1)%2==0 and (n-1)<=x and (m-1)<=y)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;

 }
return 0;
}