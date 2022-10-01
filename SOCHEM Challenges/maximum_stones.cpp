#include <bits/stdc++.h>
using namespace std;
void merge(long long arr[],long long s,long long e){
    long long mid=(s+e)/2;
    long long leftLength=mid-s+1;
    long long RightLength=e-mid;
      //create left and right parts;
    long long *left=new long long[leftLength];
    long long *right=new long long[RightLength];
  // copy into left array
    long long originalindex=s;
    for(int i=0;i<leftLength;i++){
        left[i]=arr[originalindex++];
    }
    //copy in to right array
    originalindex =mid+1;
    for(int i=0;i<RightLength;i++){
        right[i]=arr[originalindex++];
    }
    //now we have two sorted arrays and we have to merge them.
    long long leftIndex=0;
    long long rightIndex=0;
    originalindex=s;
    while(leftIndex<leftLength && rightIndex<RightLength){
        if(left[leftIndex]<=right[rightIndex]){
            arr[originalindex++]=left[leftIndex++];
        }
        else{
arr[originalindex++]=right[rightIndex++];
        }
    }  while(leftIndex<leftLength){

            arr[originalindex++]=left[leftIndex++];


    }
    while(rightIndex<RightLength){

          arr[originalindex++]=right[rightIndex++];


    }
}
void mergeShort(long long arr[],long long s,long long e){
    //base case
    if(s>=e){
        return;
    }
    long long mid=(s+e)/2;
    //left part
    mergeShort(arr,s,mid);
    //right part
    mergeShort(arr,mid+1,e);
    //merge two shorted array
    merge(arr,s,e);
}
int main(){
long long noOfBuckets;
long long Query;
cin>>noOfBuckets>>Query;
long long *arr=new long long[noOfBuckets];
for(int i=0;i<noOfBuckets;i++){
    arr[i]=0;
}
 while(Query--){
long long L,R,K,V;
cin>>L>>R>>K>>V;
for(long long x=L;x<=R;x++){
if(x%K==0){
    arr[x]=arr[x]+V;
}
}
 }
 mergeShort(arr,0,noOfBuckets-1);

 cout<<arr[noOfBuckets-1];
return 0;
}