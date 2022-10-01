// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e7+10;
// int hsn[N];
// int main(){
// int t;
// cin>>t;
// while(t--){

//     int size,p2;
//     cin>>size>>p2;
//     int *arr=new int[size];
//     for(int i=0;i<size;i++){

//     cin>>arr[i];
//      hsn[arr[i]]++;
//     }
//     // set<int>s;
// //     if(p2==1){
// //       for(int i=0;i<size;i++){
// //    s.insert(arr[i]);
// //     }
// //     cout<<s.size()<<endl;
// //     return 0;
// //     }
// // else{
//     map<int, int>m;
//     for(int i=0;i<size;i++){
//         m[arr[i]]= hsn[arr[i]];
//     }
//     int count=0,mount=0;
//     for(auto it=m.begin();it!=m.end();it++){
//     // cout<<(*it).first<<" "<<(*it).second<<endl;
//     if((*it).second>=p2)
//     count++;
//     else
//      mount++;

// // cout<<m.size();
// }
// //  cout<<"ans= ";
//      cout<<count*p2+mount<<endl;
// for(int i=0;i<size;i++){
//       hsn[arr[i]]=0;
//     }
// // }
// }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,p;
    cin>>n>>p;
    vector<int> a(n);
       vector<int>v(101,0);
    for(int i=0;i<n;i++){
    //  cout<<v[i]<<" ";
    cin>>a[i];

    }
for (int i = 0; i <n; i++)
{
v[a[i]]++;    /* code */
}
int mini=0;
for (int i = 0; i < 101; i++)
{
    /* code */
    mini=mini+min(v[i],p);
}
cout<<mini<<endl;


}
return 0;
}