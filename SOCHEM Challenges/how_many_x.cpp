#include <bits/stdc++.h>
using namespace std;
int solve(long long t,long long m){

}
int main(){
long long n,m,l,r;
cin>>n>>m>>l>>r;
int count=0;
for (long long x = l; x<=r; x++)
{
    if((n*x)%m==1){
        count++;
    }
}

cout<<count;
return 0;
}