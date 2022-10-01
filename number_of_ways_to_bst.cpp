#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll catalan(ll n){
    if(n<=1)
    return 1;
    ll res=0;
    for (ll i = 0; i < n; i++)
    {
    res+=catalan(i)*catalan(n-1-i);    /* code */
    }
    return res;
}
int main(){
ll n;
cin>>n;
for (ll i = 0; i <= n; i++)
{
cout<<catalan(i)<<" ";    /* code */
}
cout<<"\n";
cout<<catalan(n);
return 0;
}