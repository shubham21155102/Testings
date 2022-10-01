#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int n,k,avg,sum=0;
    cin>>n>>k>>avg;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    }
    int totalSum=(n+k)*avg;
    if(totalSum-sum>0){
        if((totalSum-sum)%k==0){
            cout<<(totalSum-sum)/k<<endl;
        }
         else
            cout<<-1<<endl;
    }
    else
    cout<<-1<<endl;


}
return 0;
}