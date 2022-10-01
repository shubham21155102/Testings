#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
list<int>l,m,o,p,q,r,s,t(17,100);
list<int>u(n,5);
for(int i=0;i<n;i++){
    l.push_back(i);
        m.push_front(i*2);


}
cout<<"Size of the list o is:"<<o.size()<<"\t& empty/non-empty: "<<o.empty()<<endl;
for(auto i=l.begin();i!=l.end();i++){
    cout<<*i<<" ";
}
cout<<"\n";
for(auto i=m.begin();i!=m.end();i++){
    cout<<*i<<" ";
}
// m.erase(7);
list<int>z(m);
cout<<"\n";
for(auto i=z.begin();i!=z.end();i++){
    cout<<*i<<" ";
}
cout<<"\n";
cout<<m.front()<<endl;
cout<<m.back()<<endl;
z.remove(4);
for(auto i=z.begin();i!=z.end();i++){
    cout<<*i<<" ";
}
cout<<"\n";
z.reverse();
// sort(z.end(),z.begin());   wrong
for(auto i=z.begin();i!=z.end();i++){
    cout<<*i<<" ";
}
cout<<"\n";

return 0;
}