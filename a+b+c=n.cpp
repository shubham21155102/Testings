// #include <bits/stdc++.h>
// using namespace std;
// // vector<int> solution(int n){

// // }
// int main(){
// // a+b+c=n
// int n;
// cin>>n;
// int a,b,c;
// vector<int>v;
// for (int  i = 1; i < n; i++)
// {
//     /* code */
//     for (int j = 1; j < n; j++)
//     {
//         /* code */
//         a=i;
//         b=j;
//         c=n-i-j;
//         if(a>0 and b>0 and c>0){
//         v.push_back(a);
//         v.push_back(b);
//         v.push_back(c);
//         v.push_back(1000);
//         }
//     }
//     for (int i = 0; i <v.size(); i++)
//     {
//         /* code */cout<<v[i]<<" ";
//     }


// }

// return 0;
// // }
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int lcm(int a, int hcf,int b){
    return (a*b)/hcf;
}
int main(){
//a+b+c=n
int n;
cin>>n;
int a,b,c;
vector<int>v;
set<int>s;
ll sum;
for (int i = 1; i < n; i++)
{
for (int j = 1; j< n; j++)
{
   a=i;
   b=j;
   c=n-a-b;
if(a>0 and b>0 and c>0){
    int t=(a*100)+(b*10)+c;
    // v.push_back(t);
    // // v.push_back(a);
    // // v.push_back(b);
    // // v.push_back(c);
    // v.push_back(0);
    s.insert(t);
}
}
//   for (int i = 0; i <v.size(); i++)
//   {
//    cout<<v[i]<<" ";
//   }


}
 for (auto i = s.begin(); i!=s.end(); i++)
   {
    /* code */
  v.push_back(*i);
   }
   sum=0;
for (int i = 0; i < v.size(); i++)
{
    /* code */

   ll a=v[i]/100;
   ll b=(v[i]/10)%10;
   ll c=v[i]%10;
//    cout<<a<<" "<<b<<" "<<c<<" ";
 ll p=__gcd(a,__gcd(b,c));
ll q=lcm(a,p,__gcd(b,c));

   sum+=q;
   sum=sum%1000000007;
// cout<<"sum="<<sum<<" "<<endl;

}
cout<<sum;
return 0;
}
