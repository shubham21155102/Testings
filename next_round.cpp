#include <iostream>
using namespace std;
int main(){
int n,a;
cin>>n>>a;
int count=0;
int *arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]>=arr[a-1] &&  arr[i]>0)
    count++;
}
cout<<count;
return 0;
}