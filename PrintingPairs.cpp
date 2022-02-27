#include<bits/stdc++.h>
using namespace std;
#define int long long

void print(int arr[],int n){   //fn to printing pairs
    int s=0;
    int e=n-1;
    while(s<=e){
    for(int i=s+1;i<n;i++){
        cout<<arr[s]<<" , "<<arr[i]<<"   ";
    }
    s++;
    cout<<endl;
    }
}


int32_t main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n);
return 0;
}