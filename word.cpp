#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int badeCount=0;
int chhoteCount=0;
vector<int>v;
for (int i = 0; i < s.size(); i++)
{
    int a=(int)s[i];
    v.push_back(a);
    if(a>=65 && a<=90)
    badeCount++;
    else
    chhoteCount++;
}
// cout<<badeCount<<" "<<chhoteCount;
// cout<<"\n";
if(badeCount>chhoteCount){
    // cout<<"All will be big alphabets."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
       if(v[i]>=65 && v[i]<=90 )
       {
       cout<<s[i];

       }
       else{
         cout<<(char)(s[i]+'A'-'a');
       }

    }

}
else
{
    // cout<<"All will be small alphabets."<<endl;
     for (int i = 0; i < s.length(); i++)
    {
       if(v[i]>=97 && v[i]<=122 )
       {
       cout<<s[i];

       }
       else{
         cout<<(char)(s[i]-('A'-'a'));
       }

    }
}



// for (int i = 0; i < s.size(); i++)
// {
//    cout<<v[i]<<" ";
// }
return 0;
}