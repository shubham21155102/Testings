#include <bits/stdc++.h>
using namespace std;
int main(){
long long int a,b,c,result;
cin>>a>>b>>c;
result=(a%c==0)?a/c:a/c+1;
result*=(b%c==0)?b/c:b/c+1;
cout<<result<<endl;
return 0;
}