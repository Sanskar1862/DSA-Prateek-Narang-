#include<bits/stdc++.h>
using namespace std;
#define int long long

void Print(int arr[],int n){
   
   for(int i=0;i<n;i++){   //1 2 3 4 5
       for(int j=i;j<n;j++){
           for(int k=i;k<=j;k++)
           cout<<arr[k]<<",";
           cout<<"  ";
       }
       cout<<endl;
   }
}

int32_t main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    Print(arr,n);
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
return 0;
}