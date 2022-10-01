#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
int *arr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
if(size==1){
    cout<<1;
    return 0;
}
int count=1,maxi=0;
for (int i = 0; i < size-1; i++)
{
  if(arr[i+1]>=arr[i])
 count++;
 else
    count=1;
if(count>maxi)
maxi=count;
}


cout<<maxi;

return 0;
}