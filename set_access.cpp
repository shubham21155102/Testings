#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
set<int>s;
for (int i = 0; i < n; i++)
{
 cin>>i;
 s.insert(i);
}
cout<<s.size()<<endl;
for (auto i =s.begin(); i!=s.end(); i++)
{
       cout<<*i<<" ";
}


return 0;
}