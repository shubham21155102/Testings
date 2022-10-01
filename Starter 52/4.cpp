#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int size;
    cin>>size;
    int gc=0;
    vector<int>v(size);
for (int i = 0; i <size; i++)
{
    cin>>v[i];
    gc=__gcd(gc,v[i]);
}
cout<<gc*size<<endl;


}
return 0;
}