#include <bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s;
cin>>t;
int count=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='?')
count++;
}
int fst;
for(int i=0;i<s.size();i++){
    if(s[i]=='?'){
        fst=i;
        break;
    }

}
if(t.size()==count){
for(int i=fst;i<s.size();i++){

}
}
else{
    cout<<-1<<endl;
}
return 0;
}