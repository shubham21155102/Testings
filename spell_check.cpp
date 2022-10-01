#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int size;
    cin>>size;
    string s;
    cin>>s;
    vector<char>v;
    for (int i = 0; i < size; i++)
    {
     v.push_back(s[i]);

    }
    sort(v.begin(),v.end());
    if(v[0]=='T' and v[1]=='i' and v[2]=='m' and v[3]=='r' and v[4]=='u' and size==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    // for (int i = 0; i <size; i++)
    // {
    //     /* code */ cout<<v[i];
    // }



}
return 0;
}