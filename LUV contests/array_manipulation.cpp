#include <bits/stdc++.h>
using namespace std;
int main(){
int n,q;
cin>>n>>q;
int arr[n]={0};

while (q--)
{
   int s,e,a;
   cin>>s>>e>>a;
   for (int i = s-1; i <= e-1; i++)
   {
    arr[i]=arr[i]+a;
   }


}
// for (int i = 0; i <n; i++)
// {
//     /* code */cout<<arr[i]<<" ";
// }
sort(arr,arr+n);
// cout<<"\n";
// for (int i = 0; i <n; i++)
// {
//     /* code */cout<<arr[i]<<" ";
// }
cout<<arr[n-1];
cout<<"\n";

return 0;
}