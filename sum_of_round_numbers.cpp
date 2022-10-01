#include <bits/stdc++.h>
using namespace std;
int main(){
int t,sum;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v;
    while(n>0){
int x=n%10;
v.push_back(x*pow(10,v.size()));
n=n/10;
    }
    // cout<<v.size()<<endl;
    sum=0;
    for (int i = 0; i < v.size(); i++)
    {
//   cout<<v[i]<<" ";
  if(v[i]!=0){
sum++;
  }      /* code */
    }
    cout<<sum<<endl;
     for (int i = 0; i < v.size(); i++)
    {

  if(v[i]!=0){
 cout<<v[i]<<" ";
  }      /* code */
    }

}
return 0;
}