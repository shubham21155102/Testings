#include <iostream>
using namespace std;
int main(){
int n,p=0;
long long t;
 int x;
cin>>n;
while(n--){
    t=0;


    cin>>x;
    int *arr=new int[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int mini=arr[0];
    for(int i=0;i<x;i++){
 mini=min(mini,arr[i]);}
    for(int i=0;i<x;i++){
        if(arr[i]!=mini)

t=t+(arr[i]-mini);



    }
    // cout<<mini<<endl;
    cout<<t<<endl;
}
return 0;
}