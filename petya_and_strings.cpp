#include <bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;

cin>>s1;
cin>>s2;
int x=s1.size();
for (int i = 0; i < x; i++)
{
 s1[i]=tolower(s1[i]);
 s2[i]=tolower(s2[i]);
}
if(s1==s2)
cout<<"0"<<endl;
else{
    for (int i = 0; i < x; i++)
{
 if(s1[i]>s2[i]){
    cout<<"1"<<endl;
    break;
 }
 if(s2[i]>s1[i]){
    cout<<"-1"<<endl;
    break;
 }



}
}




return 0;
}