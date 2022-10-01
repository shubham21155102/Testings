#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n>=0)
cout<<n<<endl;
else{
    int x=(-
    n);
    int y=(x%10);
    int z=(x%100)/10;
    cout<<-((x/100)*10+min(y,z))<<endl;
}
return 0;
}