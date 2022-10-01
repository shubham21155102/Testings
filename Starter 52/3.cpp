#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int size;
    cin>>size;

    vector<int>v(size),a;

    for (int i = 0; i < size; i++)
    {
        cin>>v[i];

    }


    string s;
    cin>>s;
    for (int i = 0; i <size; i++)
    {
        if(s[i]=='0')
        a.push_back(v[i]);
    }





sort(a.begin(),a.end());
cout<<a[0]<<endl;

}
return 0;
}