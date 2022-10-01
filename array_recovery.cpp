#include <bits/stdc++.h>
using namespace std;
#define abs(a,b) (a-b)>0?(a-b):(b-a)
const int N=1e7+10;
int pfx[N];
// int hsn[N];
int main(){
int t;
cin>>t;
while(t--){
    bool ans=true;
    int size;
    cin>>size;
    vector<int>v,l;
    int *arr=new int[size];
    for(int i=0;i<size;i++){
    cin>>arr[i];
     pfx[i]=pfx[i-1]+arr[i];
    //  hsn[i]=arr[i]-hsn[i-1];
    }

    for (int i = 0; i <size; i++)
    {
// if(abs(arr[i+1],arr[i]))
    // // cout<<pfx[i]<<" ";
    // if((pfx[i]-arr[i+1])>0)
    // if(arr[i+1]<arr[i])
    if((arr[i]-pfx[i])>0)
    {
ans=false;
break;
    }
    else
    ans=true;
//     // else{

//         // v.push_back(pfx[i]);
//         //  l.push_back(hsn[i]);
//     // }
//     }

//  cout<<"\n";
// for (int i = 0; i < v.size(); i++)
// {
//   cout<<l[i]<<" ";
}
if(ans==false)
cout<<-1;
else{
for (int i = 0; i <size; i++)
{
cout<<pfx[i]<<" ";
}
}

cout<<"\n";
}
return 0;
}