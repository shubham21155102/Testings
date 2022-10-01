#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   if(n<4)
   cout<<-1;
   else if(n==4)
   cout<<3<<" "<<1<<" "<<4<<" "<<2;
   else{
cout<<n<<" ";
        for(int i=2;i<n;i=i+2){
            cout<<i<<" ";
        }
           for(int i=1;i<n;i=i+2){
            cout<<i<<" ";
        }


    }
    cout<<"\n";
   }

return 0;
}