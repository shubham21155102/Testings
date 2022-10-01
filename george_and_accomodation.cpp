#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
int count =0;
while (a--)
{
    int b,c;
    cin>>b>>c;
    if((c-b)>1)
    count++;
}
cout<<count;

return 0;
}