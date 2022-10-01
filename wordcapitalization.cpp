#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int f=(int)s[0];
if(f>=65 && f<=90){
    char k=(char)f;
    cout<<k;
}
else{
    char t=(char)f+'A'-'a';
    cout<<t;

}
for (int i = 1; i < s.size(); i++)
{
cout<<s[i];    /* code */
}


return 0;
}