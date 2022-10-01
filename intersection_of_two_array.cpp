#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N],brr[N];
int main(){
int size1,size2;
cin>>size1;
int *array1=new int[size1];
int *array2=new int[size2];
for (int i = 0; i < size1; i++)
{
   cin>>array1[i];
   arr[array1[i]]++;
}
cin>>size2;
for (int i = 0; i < size2; i++)
{
   cin>>array2[i];
   brr[array2[i]]++;
}
for (int i = 0; i < size1; i++)
{
 cout<<array1[i]<<" has been came for "<<arr[array1[i]]<<"times"<<endl;
}
cout<<"\n";
for (int i = 0; i < size2; i++)
{
   cout<<array2[i]<<" has been came for "<<brr[array2[i]]<<"times"<<endl;
}
// sort(array1,array1+size1);
// sort(array2,array2+size2);
// int maximum=max(array1[size1-1],array2[size2-1]);
// int size;

//     for (int i = 0; i < size1; i++)
// {
//  if(maximum<array1[i])
//  maximum=arr[i];
// }
// for (int i = 0; i < size2; i++)
// {
//  if(maximum<array2[i])
//  maximum=arr[i];
// }
for (int i = 0; i <N; i++)
{
    if(arr[i]>0 and brr[i]>0){
        int maxi=min(arr[i],brr[i]);
        while(maxi--){
cout<<arr[array1[i]]<<" ";
        }
    }

}





return 0;
}