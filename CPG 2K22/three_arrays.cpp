#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
   int size;
   cin>>size;
   vector<int>v1(size),v2(size),v3(size),v4;
for (int i = 0; i < size; i++)
{
    cin>>v1[i];
}
for (int i = 0; i < size; i++)
{
    cin>>v2[i];
}
for (int i = 0; i < size; i++)
{
    cin>>v3[i];
}
for (int i = 0; i < size; i++)
{
  for (int j = 0; j < size; j++)
  {
    for(int k = 0; k<size; k++)
    {

      v4.push_back((v1[i]*v2[j]+v1[i]*v3[k]+v2[j]*v3[k]));
    }

  }

}
// cout<<v4.size()<<endl;
for (int i = 0; i <v4.size(); i++)
{
    cout<<v4[i]<<" ";
}

}
return 0;
}