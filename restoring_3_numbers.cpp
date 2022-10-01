#include <bits/stdc++.h>
using namespace std;
int main(){
int size=4;
int *arr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
sort(arr,arr+4);
cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2];
return 0;
}