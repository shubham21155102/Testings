#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int sum1=0;
int sum2=0;
while(t--){
    int a,b;
    cin>>a>>b;
   if(a>b)
   sum1++;
   if(b>a)
   sum2++;
}

if(sum1>sum2){
cout<<"Mishka"<<endl;
}
else if(sum2>sum1)
cout<<"Chris"<<endl;
else if(sum1==sum2)
cout<<"Friendship is magic!^^"<<endl;
return 0;
}