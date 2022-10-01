#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
vector<char>v;
for (int i = 0; i < s.size(); i++)
{
s[i]=tolower(s[i]);   /* code */
}
for (int i = 0; i < s.size(); i++)
{
  if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='y'){
    v.push_back(s[i]);
  }
}
for (int i = 0; i < v.size(); i++)
{
 cout<<"."<<v[i];
}
return 0;
}