#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
while(size--){
    int a,b;
    cin>>a>>b;
    if(a ==1 || b==1){
        cout<<a<<" "<<b;
    }
    else{
        if((a%2!=0) and (b%2!=0)){
            cout<<(a+1)/2<<" "<<(b+1)/2;
        }
        else{
            cout<<a<<" "<<b;
        }
    }
    cout<<"\n";
}
return 0;
}