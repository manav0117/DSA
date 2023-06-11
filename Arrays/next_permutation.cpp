#include<bits/stdc++.h>
using namespace std;
// Logic is to find the first element that is not in order
// then the element to swap will be idx-1 and the just next greater element
// swap from idx to end
int main()
{
    vector<int> nums={7,2,5,3,1};
    int n=nums.size()-1;
    int idx=-1;
    for(int i=n;i>0;i--)
    {
        if(nums[i]>nums[i-1])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        sort(nums.begin(),nums.end());
    }
    else{
        int prev=idx;
        for(int i=idx+1;i<=n;i++)
        {
            if(nums[i]>nums[idx-1] && nums[i]<nums[prev])
            {
                prev=i;
            }
        }
        swap(nums[prev],nums[idx-1]);
        sort(nums.begin()+idx,nums.end());
    }
    for(int i=0;i<=n;i++)
    {
        cout<<nums[i]<<" ";
    }
}s