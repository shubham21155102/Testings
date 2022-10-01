// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// // set<char>se;
// string s;
// cin>>s;
// bool result=true;
// for(int i=0;i<s.size();i++){
//     if(s[i]!='4' or s[i]!='7'){
//        result=false;
//         break;
//     }

// }
// // cout<<result<<endl;
// if(result==true)
//     cout<<"YES";

// else
// cout<<"NO";
// // string d;
// // for(auto i=se.begin();i!=se.end();i++){
// //     // cout<<*i<<" ";
// //     d.push_back(*i);
// // }
// // // cout<<d;
// // if(d=="47")
// // cout<<"YES"<<endl;
// // else{
// //     cout<<"NO"<<endl;
// // }



// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// long long int a,b;
// bool condition=true;
// cin>>a;
// if(a==0){
//     condition=false;
// }
// while(a>0){
//      b=a%10;
//     a=a/10;
//     // cout<<"b="<<b<<" "<<"a= "<<a<<endl;
// if(b==4 or b==7){
//     condition=true;

// }
// else{
//     condition=false;
//     break;
// }
// }
// if(condition==true){
//     cout<<"YES"<<endl;
// }
// else
// cout<<"NO"<<endl;
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
for(int i=0;i<s.size();i++){
if(s[i]=='4')
count++;
else if(s[i]=='7')
count++;
}
// cout<<count;
if(count==4 || count==7)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}