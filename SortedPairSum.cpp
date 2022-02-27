#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int sum=0;
    int a=0,b=0;
    int max_sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            sum=arr[i]+arr[j];
            if(sum>max_sum&&sum<x)
            {
            max_sum=sum;
            a=i;
            b=j;
            }
            else
            max_sum=max_sum;
        }
    }
    cout<<a<<" and "<<b;
}