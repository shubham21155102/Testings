#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n>2){
if(n&1)
  cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
    }
else{
    cout<<"NO"<<endl;
}
return 0;
}