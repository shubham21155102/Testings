#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while (n--)
{
    int size;
    cin>>size;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for (int i = 0; i < size; i++)
    {
      if(s1[i]=='G')
      s1[i]='B';
      if(s2[i]=='G')
      s2[i]='B';

    }
    // cout<<s1<<" "<<s2<<" ";
if(s1==s2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

return 0;
}