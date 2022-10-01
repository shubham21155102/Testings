#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sortArrays(ll arr[], int length)
{

    // Sorting using a single loop
    for (int j = 0; j < length - 1; j++)
    {
        // Checking the condition for two
        // simultaneous elements of the array
        if (arr[j] > arr[j + 1])
        {
            // Swapping the elements.
            ll temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;

            // updating the value of j = -1
            // so after getting updated for j++
            // in the loop it becomes 0 and
            // the loop begins from the start.
            j = -1;
        }
    }
    // return arr;
}

int main(){
int n;

cin>>n;
while(n--){
  int a,b;
 ll c;
  cin>>a>>b>>c;
//   vector<ll>arr(a);
ll *arr=new ll[a];
for (int i = 0; i < a; i++)
{
    cin>>arr[i];
}



    while(c--){
//  sort(arr.begin(),arr.end());
sortArrays(arr,a);

      arr[0]=arr[0]^b;


    }
     for (int i = 0; i < a; i++)
 {
    cout<<arr[i]<<" ";
 }

cout<<endl;
}



return 0;

}

