#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals={{1,3},{2,5},{6,8},{7,13}};
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    int size=intervals.size();
    for(int i=0;i<size;i++)
    {
        if(ans.empty())
        {
            ans.push_back(intervals[i]);
        }
        else{
            vector<int> &v=ans.back();
            int y=v[1];
            if(intervals[i][0]<=y)
            {
                v[1]=max(y,intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<"["<<ans[i][0]<<" , "<<ans[i][1]<<" ]";
    }
}