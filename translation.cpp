#include <bits/stdc++.h>
using namespace std;
int main(){
// string a,b;
// cin>>a>>b;
// int c=0;
//  int j=0;
// for (int i = a.size()-1; i>=0; i--)
// {

// if(a[i]==b[j])
// c++;
// j++;

// }
// // cout<<c<<endl;
// if(c==a.size())
// cout<<"Yes";
// else
// cout<<"No";
 string s,t;
    cin>>s>>t;
    int k = s.length();
    int l = t.length();
    int i,j;
    for(i=0,j=l-1;i<k,j>=0;i++,j--){
        if(s[i] != t[j]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

return 0;
}