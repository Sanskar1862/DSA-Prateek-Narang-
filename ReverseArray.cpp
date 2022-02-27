#include<bits/stdc++.h>
using namespace std;
#define int long long

void swap1(int *arr,int n){         //reverse Array fn
    int s=0;                        //Time Complexity O(N)
    int e=n-1;
    while(s<=e){
    swap(arr[s],arr[e]);
    s+=1;
    e-=1;}
}

int32_t main()
{
    int arr[]={4,23,54,76,89,90};
    int n=sizeof(arr)/sizeof(int);
    swap1(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
return 0;
}