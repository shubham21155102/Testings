#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
int *arr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
int cnt=0;
for (int i = 0; i < size; i++)
{
  if(arr[i]!=arr[i+1])
  cnt++;
}
cout<<cnt<<endl;
return 0;
}