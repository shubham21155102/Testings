#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ans;
while(t--){
    int size;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }

// else{

    for(int i=0;i<size;i++){
    if(arr[i]!=arr[i+1]){
      if(arr[i+1]!=arr[i+2]){
      ans=i+2;
      break;}
      else{
        ans=i+1;
        break;
      }
    }
    }
    cout<<ans<<endl;
}
return 0;
}