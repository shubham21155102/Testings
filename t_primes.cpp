#include <bits/stdc++.h>
using namespace std;
int main(){
long long int size;
cin>>size;
int count;
int *arr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
for(int i=0;i<size;i++){
    count=0;
for(int j=1;j<=arr[i];j++){

    if(arr[i]%j==0)
    count++;

    if(count>3)
    break;


}
// while(count<4){

// }
if(count==3)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}