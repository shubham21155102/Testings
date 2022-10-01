#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<char>sk;
string s;
cin>>s;
for (int i = 0; i < n; i++)
{
    s[i]=tolower(s[i]);
   sk.insert(s[i]);
}
if(sk.size()==26)
cout<<"YES";
else
cout<<"NO";
return 0;
}