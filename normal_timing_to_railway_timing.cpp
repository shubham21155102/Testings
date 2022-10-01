#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int x;
    cin>>x;
    int f=x%10;
    int e=(x/10)%10;
    int d=(x/100)%10;
    int c=(x/1000)%10;
    int b=(x/10000)%10;
    int a=(x/100000);
    if((a+b+c)==(d+e+f))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

return 0;
}