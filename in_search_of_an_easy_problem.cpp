#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v;
for (int i = 0; i <n; i++)
{
 int a;
 cin>>a;
 v.push_back(a);   /* code */
}
sort(v.begin(),v.end());
if(v[v.size()-1]==1)
cout<<"HARD"<<endl;
else
cout<<"EASY"<<endl;
return 0;
}