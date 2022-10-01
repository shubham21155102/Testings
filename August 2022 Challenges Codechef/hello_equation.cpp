// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
// vector<int>v;
// int p;
// int q=8;
// int r;
// while (n--)
// {
//    int x;
//    cin>>x;
//    for (int i = 1; i <= sqrt(x); i++)
//    {
//    p=(i*i)+(4*i);
//         v.push_back(p);
// }
//  for (int i = 1; i <= sqrt(x); i++)
//    {

// }



//    for (int i = 0; i < v.size(); i++)
//    {
//    cout<<v[i]<<" ";
//    }


// }

// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void solve()
{
int x;
   cin>>x;
   if(x<5){
      cout<<"NO"<<endl;
      return;
   }
   for (int i = 1; i*i <= x; i++)
   {
      int temp=x-2*i;
      int zemp=i+2;
      if(temp%zemp==0){
       cout<<"yes"<<endl;
       return;
      }


   }
   cout<<"NO"<<endl;
}
int main(){
int n;
cin>>n;
while(n--){

solve();




}
return 0;
}