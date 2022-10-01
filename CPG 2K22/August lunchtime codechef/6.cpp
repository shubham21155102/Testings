#include <bits/stdc++.h>
using namespace std;
const int N=INT_MAX;
int hsn[N];

int main(){
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    int *arr=new int[a];
    for (int i = 0; i <a; i++)
    {
      cin>>arr[i];
      hsn[arr[i]]++;
    }
    set<int>s;
    for (int i = 0; i < a; i++)
    {
       s.insert(arr[i]);
    }
    int maxi=0;
    // sort(hsn.begin(),hsn.end());
    // sort(hsn,hsn+a-1);
     for (int i = 0; i < a; i++)
    {
     maxi=max(hsn[arr[i]],maxi);
    }
// cout<<maxi<<endl;

if(maxi>s.size()+2)
cout<<"No"<<endl;
else

cout<<"Yes"<<endl;

}
return 0;
}
