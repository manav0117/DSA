#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
      int maxSum=INT_MIN;
      int sum=0;
      for(int i=0;i<nums.size();i++)
      {
          sum+=nums[i];
          maxSum=max(maxSum,sum);
          if(sum<0)
          sum=0;
      }
      return maxSum;
    
}
int main()
{
    vector<int> nums={-25,-5,-10,-23,-25,-12};
    cout<<maxSubArray(nums);
}