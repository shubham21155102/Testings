#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	while(n--){
         vector<char>v;
        int x;
        cin>>x;
	    string s,t,p,q;
	    cin>>s;

	    for(int i=0;i<x;i++){
	       if(s[i]>=48 and s[i]<=57)
           v.push_back(s[i]);
           if(s[i]=='+')
           p.push_back(s[i]);
           if(s[i]=='-')
           q.push_back(s[i]);
	    }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            t.push_back(v[i]);
        }
        cout<<t<<" "<<p<<" "<<q<<""<<endl;

	}
return 0;
}