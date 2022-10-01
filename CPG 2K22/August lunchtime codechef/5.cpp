#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a;
    cin>>a;
    vector<int>v;
    for(int i=0;i<a;i++){
       v.push_back(a-i);

    }
    for(int i=0;i<a;i++){
       cout<<v[i]<<" ";
    }

}
return 0;
}