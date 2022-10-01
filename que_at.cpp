#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
string s;
cin>>x>>y;
cin>>s;
for (int i = 0; i < x; i++)
{
   while (y--)
   {
    if(s[i]=='B' and s[i+1]=='G'){
    s[i]='G';
    s[i+1]='B';
   }}

}
cout<<s;
return 0;
}