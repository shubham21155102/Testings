#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int N,P,Q;
//N-team size
//team size from p to q
cin>>N>>P>>Q;
vector<long long>IITBHU(N);
vector<long long>IITKANPUR(N);
for(int i=0;i<N;i++){
    cin>>IITBHU[i];

}
for(int i=0;i<N;i++){
    cin>>IITKANPUR[i];

}
long long max=0;
for (int i = 0; i < N; i++)
{
   if(IITKANPUR[i]>max)
   max=IITKANPUR[i];
}
int count =0;
for (int i = 0; i < N; i++)
{
   if(IITBHU[i]>max)
  count++;
}
if(count>=P && count<=Q)
cout<<count;
else
cout<<0;

return 0;
}