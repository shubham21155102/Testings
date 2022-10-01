#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
int n,x,n1;
n1=n;
cin>>n;
int m=sqrt(n)+1;

// int *hell=new int[n];
// hell[0]=1;
// for(int i=0;i<n;i++){
//     hell[i+1]=hell[i]+(i+2);
// }
// for(int i=0;i<n;i++){
//     cout<<hell[i]<<" ";
// }
// cout<<endl<<endl;

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        if((pow(i,2)+pow(j,2)+i+j)/2==n){

           x=1;
           break;
        }

    }
}

if(x==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}


// #include<iostream>
//   #include<algorithm>
//   #include<cstdio>
//  #include<math.h>
//   #include<string>
//   using namespace std;
//   typedef long long ll;

//   int n;
//  ll cal(ll ans){
//         return ans*(ans+1)/2;
//  }


//  int main()
//  {  while(scanf("%d",&n)){
//         int flag=0;
//         for(int i=1;i<=sqrt(2*n)+1;i++){
//                ll sum=n-cal(i);
//                ll l=i,r=sqrt(2*n)+1;
//                ll mid;
//                while(l<r){
//                      mid=(l+r)/2;
//                      if(cal(mid)==sum){
//                           flag=1;
//                           break;
//                      }
//                      if(cal(mid)<sum) l=mid;
//                      else r=mid;
//                      if(r-l==1){
//                           if(cal(r)==sum||cal(l)==sum){
//                               flag=1;
//                               break;
//                           }
//                           else break;
//                      }
//                }
//                if(flag) break;
//         }
//         if(flag) printf("YES\n");
//         else printf("NO");
//     }
//  }