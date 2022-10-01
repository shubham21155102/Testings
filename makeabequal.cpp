#include <bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
while(n--){
    long long a;
    cin>>a;
    long long sum1=0,sum2=0;
  long long *arr1=new long long[a];
    for (int i = 0; i <a; i++)
    {
      cin>>arr1[i];
      sum1=sum1+arr1[i];
    }
       long long *arr2=new long long[a];
    for (int i = 0; i <a; i++)
    {
      cin>>arr2[i];
      sum2=sum2+arr2[i];
    }
cout<<sum1<<" "<<sum2<<endl;
if(sum1!=sum2)
cout<<-1<<endl;
else
{
    long long *brr=new long long[a];
   long long maxi=0;

    for (int i = 0; i < a; i++)
    {
        brr[i]=abs(arr1[i]-arr2[i]);
    }
    for (int i = 0; i < a; i++)
    {
      maxi=maxi+brr[i];
    }
    cout<<maxi/2<<endl;

}


}
return 0;
}