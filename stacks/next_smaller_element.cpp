#include<bits/stdc++.h>
using namespace std;
int main()
{
        int arr[]={2,1,4,3};
        int n=sizeof(arr)/sizeof(int);
        stack<int>stk;
        vector<int> ans;
        stk.push(-1);
        
        for(int i=n-1;i>=0;i--)
        {
            int curr=arr[i];
            while(stk.top>=curr)
            {
                stk.pop();
            }
            
            ans[i]=stk.top();
            stk.push(curr);
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<ans[i]<<" ";
        }
}