#include <bits/stdc++.h>
using namespace std;
int main(){
  int v[15][15];
    int count1,count2;
for (int i = 1; i <=5; i++)
{
    for (int j = 1; j <=5; j++)
    {


      cin>>v[i][j];
       if(v[i][j]==1){
        count1=abs(i-3);
        count2=abs(j-3);
       }

    }

}
// for (int i = 1; i <=5; i++)
// {
//     for (int j = 1; j <=5; j++)
//     {

//         if(v[i][j]==1)
//         count=i+j;

//     }

// }
cout<<count1+count2;

return 0;
}