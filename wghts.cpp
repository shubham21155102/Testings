#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b==a)
    cout<<"YES"<<endl;
    else if(c==a)
    cout<<"YES"<<endl;
    else if(d==a)
    cout<<"YES"<<endl;
    else if((b+c)==a)
    cout<<"YES"<<endl;
    else if((c+d)==a)
    cout<<"YES"<<endl;
    else if((b+d)==a)
    cout<<"YES"<<endl;
    else if((b+d+c)==a)
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;

}
return 0;
}