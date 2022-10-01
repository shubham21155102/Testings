#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    string a,b;
    cin>>a;
    cin>>b;
    set<char>s;
    s.insert(a[0]);
     s.insert(a[1]);
      s.insert(b[0]);
       s.insert(b[1]);
       if(s.size()==1)
       cout<<0<<endl;
       else if(s.size()==2)
       cout<<1<<endl;
       else if(s.size()==3)
       cout<<2<<endl;
       else
       cout<<3<<endl;


}
return 0;
}