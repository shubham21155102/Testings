#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"Yes"<<endl;
    }
    else{
        if((x-y)%2==0 || (y-x)%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}
return 0;
}