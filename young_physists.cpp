#include <iostream>
using namespace std;
int main(){
int n,sum1=0,sum2=0,sum3=0,a,b,c;
cin>>n;
while(n--){
    cin>>a>>b>>c;
    sum1=sum1+a;
    sum2=sum2+b;
    sum3=sum3+c;
}

if(sum1==0 && sum2==0 && sum3==0){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}
//cout<<"("<<sum1<<","<<sum2<<","<<sum3<<")"<<endl;
return 0;
}