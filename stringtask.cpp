#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
for (int i = 0; i <s.size(); i++)
{
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
   s.erase(i,1);
   continue;
    }

}
for (int i = 0; i <s.size(); i++)
{
cout<<"."<<(char)tolower(s[i]);

}

return 0;
}