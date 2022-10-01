#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
s[0]=toupper(s[0]);
// cout<<s;
for (int i = 1; i < s.size(); i++)
{
    /* code */ s[i]=tolower(s[i]);
}
cout<<s;

return 0;
}