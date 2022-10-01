#include <iostream>
using namespace std;
#define ll long long
int main(){
ll a,b,odds,evens;
cin>>a>>b;
evens=a/2;
odds=a-evens;

if(b<=odds)
cout<<b*2-1;
else
cout<<(b-odds)*2;

return 0;
}