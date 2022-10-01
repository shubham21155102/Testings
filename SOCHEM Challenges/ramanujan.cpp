#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
cin>>n;
vector<long long>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int count=0,ans=0;
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    if((v[i]|v[j]) &1)
    {  ans=count;
break;
}

else{
v[i]=v[i]/2;
count++;
  }

  }
}
cout<<ans;
    return 0;
}
