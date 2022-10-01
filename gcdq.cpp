#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

while(n--){
int size,query;
cin>>size>>query;
vector<int>frd,bkd;
vector<int>v(size);
for (int i = 0; i < size; i++)
{
    cin>>v[i];
}
frd[0]=bkd[size-1]=0;
for (int i = 0; i < size; i++)
{
   frd[i]=__gcd(frd[i],v[i]);
}
for (int i = size-1; i>=0; i++)
{
 bkd[i]=__gcd(bkd[i],v[i]);
}
while(query--){
    int f,s;
    cin>>f>>s;
    cout<<__gcd(frd[f-1],bkd[s])<<endl;

}

}
return 0;
}