#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    while(n--){
    int m,k;
    cin>>m>>k;
    vector<int>v(m);
    vector<int>v2;
    set<int>v1;
     set<int>v3;
int sum=0;
int count=0;
int sum1=m*(m+1)/2;
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
   for (int i = 0; i < m; i++)
{
   v3.insert(v[i]);
   sum=sum+v[i];
}


if(v.size()!=v3.size()){
    cout<<0<<endl;
}
else if(sum1!=sum)
{
    cout<<0<<endl;
}

else{
sort(v.begin(),v.end()-(m-k));
for (int i = 1; i < k+1; i++)
{
   v2.push_back(i);
}
for (int i = 0; i < k; i++)
{
    if(v[i]!=v2[i]){
        count++;
    }

}
cout<<count<<endl;
}




    }
return 0;
}