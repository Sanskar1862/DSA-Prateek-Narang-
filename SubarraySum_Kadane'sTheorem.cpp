#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        //Kadane's Algo
        int curr_sum=nums[0];
        int larg_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(curr_sum>=0)
                curr_sum+=nums[i];
            else
                curr_sum = nums[i];
            larg_sum=max(larg_sum,curr_sum);
        }
        return larg_sum;
    }

int main()
{
    //  int arr[]={1,-2,3,4,4,-2};
     vector<int> arr{ 1,-2,3,4,4,-2 };
    int max1=maxSubArray(arr);
    cout<<max1;
return 0;
}