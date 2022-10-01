#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int p,q;
while(t--){
    int a,b;
    cin>>a>>b;
    if(b>a){
    cout<<b-a<<endl;

    }
    else{
    int x=min(a,b);
    int y=max(a,b);

    p=y%x;
    q=y-(y/x)*x;
    cout<<min(p,q)<<endl;
    }
}
return 0;
}