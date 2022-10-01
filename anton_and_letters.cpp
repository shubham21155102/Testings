#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
set<char>sett;
for (int i = 0; i < s.size(); i++)
{
   if(s[i]>=97 and s[i]<=122)
   sett.insert(s[i]);
}
cout<<sett.size();
return 0;
}