#include <bits/stdc++.h>
using namespace std;
int main(){
map<int ,int>m;
cout<<m.empty()<<endl;
m[12]=2;
m[10]=7;
m[8]=7;
m[5]=10;
int n;
cin>>n;
// for (int i = 0; i <n; i++)
// {

// }
// map<int ,int>  :: iterator it;
for (auto i=m.begin(); i!=m.end(); i++)
{
cout<<(*i).first<<" "<<(*i).second<<endl;
}
return 0;
}