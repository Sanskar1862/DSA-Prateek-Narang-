#include<bits/stdc++.h>
using namespace std;
#define int long long

//Brute Force Approach O(N^3)

int SumSubArray(int arr[],int n){
   int max=0;
   int s=0;
   for(int i=0;i<n;i++){   //1 2 3 4 5
       for(int j=i;j<n;j++){
           s=0;
           for(int k=i;k<=j;k++){
           s=s+arr[k];
           if(max<=s)
           max=s;
           }
       }
   }
   return max;
}

int32_t main()
{
    int arr[]={1,-2,3,4,4,-2};
    int n=sizeof(arr)/sizeof(int);
    int max=SumSubArray(arr,n);
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    cout<<max;
return 0;
}