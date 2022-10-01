#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll n;
cin>>n;
 int sumita=0;
    int sumit=0;
    while(n>10){
        ll l=n%10;
        ll t=n/10;
        sumita++;
        if(l==4 || l==7)
       sumit++;

    }
    if(sumit==sumita)
    cout<<"yes";
    else
    cout<<"no";




return 0;
}