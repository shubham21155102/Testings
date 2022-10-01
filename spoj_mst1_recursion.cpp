#include <bits/stdc++.h>
using namespace std;
int minStep(int n){
    if(n==1)
    return 0;
    int subOne=INT_MAX,divTwo=INT_MAX,divThree=INT_MAX;
    if(n>=2)
    subOne=1+minStep(n-1);
    if(n%2==0)
    divTwo=1+minStep(n/2);
    if(n%3==0)
    divThree=1+minStep(n/3);
    return min(subOne,min(divTwo,divThree));
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<minStep(n);
}
return 0;
 }



























// #include <bits/stdc++.h>
// using namespace std;
// int processes(int n){
//     if(n==1)
//     return 0;
//     int SubOne=INT_MAX,DivTwo=INT_MAX,DivThree=INT_MAX;
//     if(n>=2)

// }
// int main(){
// int n;
// cin>>n;

// return 0;
// }