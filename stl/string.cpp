#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
string s1;
cout<<s1.length()<<endl;
cout<<"["<<s1<<"]"<<endl;
string s2(s1);
cout<<s2.length()<<endl;
s2="Hello";
cout<<s2.length()<<endl;
string s3(s2);
cout<<s3.length()<<endl;
cout<<"["<<s3<<"]"<<endl;
string s4(s3,0,3);
cout<<s4<<endl;
string s5(5,'a');
cout<<s5<<endl;
string s6(s2.begin(),s2.end()-3);
cout<<s6<<endl;
s6.push_back('y');
cout<<s6<<endl;
s6.pop_back();
cout<<s6<<endl;
string s7=s6;
s7.clear();
cout<<s7<<endl;
s7.append(s6);
cout<<s7<<endl;
string s8="Mirzapur";
cout<<s7.compare(s6)<<endl;
s8.erase(4,1);
cout<<s8<<endl;
string s9="hell";
string s10="lleh";
cout<<s10.compare(s9)<<endl;
sort(s9.begin(),s9.end());
sort(s10.begin(),s10.end());
cout<<s9<<" "<<s10<<endl;
return 0;
}