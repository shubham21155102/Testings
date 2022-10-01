#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
    int n;
    cin>>n;
    while(n--){
        int size;
         cin>>size;
         string s;
         cin>>s;
         int c1=0;
         for(int i=0;i<size;i++){
             if(s[i]=='1')
             c1++;

         }
        if(c1%4==0)
        cout<<"1"<<endl;
        else if(c1==0)
        cout<<"1"<<endl;
        else
         cout<<"0"<<endl;
    }
    return 0;
}
