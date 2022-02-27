#include<bits/stdc++.h>
using namespace std;
#define int long long


int SumSubArray(int arr[],int n){
   int Prefix[100]={0};
   Prefix[0]=arr[0];

    for(int i=1;i<n;i++){                 //Prefix Array
        Prefix[i]=Prefix[i-1]+arr[i];
    }
  //Time Complexity O(N^2)
   int s=0;
   int max=0;
   for(int i=0;i<n;i++){   //1 2 3 4 5
       for(int j=i;j<n;j++){
           s=0;
           s=i>0?Prefix[j]-Prefix[i-1]:Prefix[j];         //sum calculation using prefix array
           if(s>=max)
           max=s;
       }
   }
   return max;
}

int32_t main()
{
    int arr[]={1,-2,3,4,4,-2};
    int n=sizeof(arr)/sizeof(int);
    int max=SumSubArray(arr,n);
    cout<<"The Max Sum of subarray is: "<<max;
return 0;
}