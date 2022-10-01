#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
int *arr=new int[size];
int *brr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i]>>brr[i];
}
vector<int>v;
int sum=arr[0]+brr[0];
for(int i=1;i<size;i++){
    v.push_back(sum);
    sum=sum-arr[i]+brr[i];

}
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
sort(v.begin(),v.end());
cout<<v[v.size()-1];
return 0;
}