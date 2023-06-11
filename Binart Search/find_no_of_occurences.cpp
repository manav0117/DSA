#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size();
        int fst=-1;
        int lst=-1;
        int mid=(s+e)/2;
        vector<int> ans;
        // For first element
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                fst=mid;
                e=mid-1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=(s+e)/2;
        }
       
        s=0;
        e=nums.size();
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                lst=mid;
                s=mid+1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=(s+e)/2;
        }
        
        // if(!fst>=0 and !lst>=0)
        // {
        //     fst=-1;
        //     lst=-1;
        // }
 ans.push_back(fst);
 ans.push_back(lst);
 return ans;


    }
int main(){
    vector<int> nums={5,7,7,8,8,10};
   vector<int>ans= searchRange(nums,8);
   cout<<ans.size();

}

