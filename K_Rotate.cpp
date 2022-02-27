#include<bits/stdc++.h>
using namespace std;
// #define int long long


vector<int> kRotate(vector<int> a, int k){
     if(k==0)
    return a;
    
     for (int i = 0; i < k; i++)
    {
    
        a.insert(a.begin(),a[a.size()-1]);
        a.pop_back();
    }
   return a;
}


int main()
{
         vector<int> a{1,2,3,4,5};
         kRotate(a,2);
        int n=a.size();
         for(int i=0;i<n;i++)
         cout<<a[i]+" ";
    // int n=sizeof(arr)/sizeof(int);
    // int max1=SumSubArray(arr);
    // cout<<max1;
    return 0;
}