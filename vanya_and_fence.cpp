#include <bits/stdc++.h>
using namespace std;
int main(){
int size,maxi;
cin>>size>>maxi;
int width=size;
int *arr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
for(int i=0;i<size;i++){
if(arr[i]>maxi)
width++;
}
cout<<width;
return 0;
}