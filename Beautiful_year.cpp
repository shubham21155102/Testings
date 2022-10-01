#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(true){
    n++;
    int o=n%10;
    int t=(n/10)%10;
    int h=(n/100)%10;
    int th=(n/1000);
    if(o!=t && o!=h && o!=th && t!=h && t!=th && h!=th){
        cout<<n;
        return 0;
    }
}
return 0;
}