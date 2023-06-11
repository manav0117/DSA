#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,8,8,9,10,11,12};
    vector<int> ans;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==i+1)
        {
            continue;
        }
        else{
            ans.push_back(i+1);
            break;
        }
    }
    ans.push_back(ans.back()+1);
}