#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards,int k ,int mid ,int n)
{
    int painters=1;
    int timeSum=0;
    for(int i=0;i<n;i++)
    {
        if(timeSum+boards[i]<=mid)
        {
            timeSum+=boards[i];
        }
        else{
            painters++;
            if(painters>k or boards[i]>mid)
            {
                return false;
            }
            timeSum=boards[i];
        }
}
    return true;
    
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    int n=boards.size();
    for(int i=0;i<n;i++)
    {
        sum+=boards[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(isPossible(boards,k,mid,n))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;
}