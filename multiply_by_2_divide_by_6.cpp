#include <bits/stdc++.h>
using namespace std;
int main(){
long long int t,x;
cin>>t;
int steps;
while(t--){
    cin>>x;
    steps=0;
    while(x>1){
        if(x%6==0){
            x=x/6;
            steps++;
        }
        else{
            x=x*2;
            steps++;
        }

    }
    if(x==1)
cout<<steps<<endl;
else
cout<<-1<<endl;
}

return 0;
}