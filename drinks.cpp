#include <bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
float sum=0;
float *arr=new float[size];
for(int i=0;i<size;i++){
cin>>arr[i];
sum+=arr[i];
}
cout<<sum/(float)size<<endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,a;
 float num=0;
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>a;
  num+=a;}
cout<<num/n;
}