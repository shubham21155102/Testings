#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
 vector<int>v;
    for (int i = 1; i <=1666; i++)
    {
        if((i%3)!=0 and (i%10)!=3)
        v.push_back(i);
    }
    // for (int i = 0; i < 1000; i++)
    // {
    //     /* code */
    //     cout<<v[i]<<" ";
    // }
while(t--){
    int n;
    cin>>n;

   cout<<v[n-1]<<endl;
}
return 0;
}