#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    if(a%b==0){
        if((a/b)%2==0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}