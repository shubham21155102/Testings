#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int size,indexing=0;
    cin>>size;
    set<int>s;
    vector<int>v(size);
    for (int i = 0; i < size; i++)
    {
      cin>>v[i];

            }

          for (int i = 0; i < size; i++)
    {
   s.insert(v[i]);
     }
       if(s.size()==1)
       cout<<0<<endl;
       else{
         for (int i = 0; i < size; i++)
    {
     if(v[i]!=v[i+1]){
        indexing++;
        break;
     }
       }
       if(v[0]==v[size-1])
       cout<<size-indexing-1<<endl;
       else
       cout<<size-indexing-2<<endl;


            }



}
return 0;
}