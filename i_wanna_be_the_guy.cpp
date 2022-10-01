// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// // int n;
// // cin>>n;
// // vector<int>arr(7,0);
// // for (int i = 0; i < 7; i++)
// // {
// //    cin>>arr[i];
// // }
// // set<int>s;
// // for (int i = 0; i < 7; i++)
// // {
// //    s.insert(arr[i]);
// // }
// // if(s.size()>=n)
// // cout<<"I become the guy.";
// // else
// // cout<<"Oh, my keyboard!";
// // return 0;
// // }
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int array[250];
//     int n, p, q;
//     cin >> n >> p;
//     int count = 0;

//     for  (int i =  0 ; i < p ; i++)
//     {
//         cin >> array[i];
//     }
//     cin >> q;
//     for (int i = p ; i < p + q ; i++)
//     {
//         cin >> array[i];
//     }

//     sort (array, array + (p + q));

//     for (int i = 0 ; i < p+q ; i++)
//     {
//         if (array[i] != array[i+1])
//         {
//             count++;
//         }
//     }

//     if (n == (count))
//     {
//         cout << "I become the guy." << endl;
//     }
//     else
//     {
//         cout << "Oh, my keyboard!" << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int level,n,m,a[100000],i,j,flag=0,l;
    cin>>level;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(i=n; i<n+m; i++)
        cin>>a[i];
        l=n+m;
    sort(a,a+l);
  /*  for(i=0; i<n+m; i++)
        cout<<a[i]<<" ";*/
    for(i=0; i<n+m; i++)
    {
        if(a[i]!=a[i+1])
            flag++;

    }
    /// cout<<flag;
    if(flag==level)
        cout<< "I become the guy.";
    else
        cout<<"Oh, my keyboard!";


}