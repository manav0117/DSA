#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={5,1,6,2,3,8,0};
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    int x=11;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int val=nums[i]+nums[l]+nums[r];
            if(val==x)
            {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[l]);
                temp.push_back(nums[r]);
                ans.push_back(temp);
                l++;
                r--;
            }
            else if(val<x)
            {
                l++;
            }
            else{
                r--;
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2];
        cout<<endl;
        
    }
    
}