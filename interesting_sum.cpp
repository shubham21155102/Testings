#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    int *arr=new int[a];
    for (int i = 0; i <a; i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+a);
    cout<<arr[a-1]+arr[a-2]-arr[0]-arr[1]<<endl;
}
return 0;
}