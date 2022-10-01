#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int count;
long long ans;


cin>>count;
long long *arr=new long long[count];
for (int i = 0; i < count; i++)
{
   cin>>arr[i];
}
long long sum=0;
for (int i = 0; i < count; i++)
{
    sum=sum+arr[i];

}
long long sum1=sum;

for (int i = 1; i < count-1; i++)
{
   sum1=sum-arr[i];
   if(sum1%2==0){
if((sum-sum1-arr[i+1])%2==0){
    ans=i+1;
    break;
}
else{
    ans=-1;
}

   }
   else
   ans=-1;

}
cout<<ans;




return 0;
}