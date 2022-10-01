#include <bits/stdc++.h>
using namespace std;
int main(){
int size=4;
int *arr=new int[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
set<int>s;
for (int i = 0; i < size; i++)
{
    /* code */s.insert(arr[i]);
}
cout<<size-s.size()<<endl;
return 0;
}