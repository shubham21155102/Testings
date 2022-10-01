// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// string a="I hate it",b=" that I love it",c=" that I hate it";
// // cout<<a+b+c;
// int n;
// cin>>n;
// if(n==1){
// cout<<a;
// }
// // else if(n==2){
// //     cout<<a<<b;
// // }
// else
// {
//     n=n-1;
//     float x=n;
//    x=ceil(x/2);
// while(x--){

//    a=a+b;

//    a=a+c;
//     }
//     cout<<a;
//     }
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
cout<<"I hate";
for(int i=1;i<a;i++)
{
cout<<(i%2==1?" that I love":" that I hate");
}
cout<<" it";
return 0;
}