#include <bits/stdc++.h>
using namespace std;
int fastExpo(int n,int x){
    if(x==0)
    return 1;
    int ans=fastExpo(n,x/2);
    if(n&1)
    return ans*ans*n;
    else
    return ans*ans;
}
int main(){
int n,x;
cin>>n>>x;
cout<<fastExpo(n,x);
return 0;
}