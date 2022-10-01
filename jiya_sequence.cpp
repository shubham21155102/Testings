// // #include <iostream>
// // using namespace std;
// // int main(){
// // 	int x;
// // 	cin>>x;
// // 	int res;
// // 	while(x--){
// // 		int n;
// //         res=1;
// // 		cin>>n;
// // 		int *arr=new int[n];
// // 		for(int i=0;i<n;i++){
// // 			cin>>arr[i];
// // 		}

// // 		for(int i=0;i<n;i++){
// // 			res=res*arr[i];

// // 		}
// // // cout<<res<<endl;
// // 		if(res%10==2 || res%10==3 || res%10==5)
// // 		cout<<"YES"<<endl;
// // 		else
// // 		cout<<"NO"<<endl;
// // 	}
// // }
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int binaryToDecimal(string s)
// {
//     bitset<64> bits(s);
//     int number = bits.to_ulong();
//     return number;
// }
// int main(){
// string s;
// cin>>s;
// cout<<binaryToDecimal(s)<<endl;
// return 0;
// }
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int x;
for (int  i = 2; i<=n; i++)
{
    x=0;8
    if(n%i==0){
        x=1;
        break;
    }
}
if(x==1)
cout<<"Non Prime"<<endl;
else
cout<<"Prime"<<endl;


return 0;
}