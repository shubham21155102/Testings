#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
vector <string> str;
while(n--){
    string s;
    cin>>s;
    str[n]=s;
}
for(int i=0;i<str.size();i++){
    cout<<str[i]<<endl;
}
return 0;
}