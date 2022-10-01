#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
int count=0;
// if(n==1){
// count=1;
// return 0;}
// else{
while(n>1){
if(n%3==0){
n=n/3;
count++;
}
else if(n%2==0){
n=n/2;
count++;
}
else{
n=n-1;
count++;
// }
}}
cout<<count<<endl;
    }
return 0;
}