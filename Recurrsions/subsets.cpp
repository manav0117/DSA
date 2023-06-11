#include<bits/stdc++.h>
using namespace  std;
void solve(vector<int> v,vector<vector<int>> &ans,vector<int> output,int index)
{ 
     //base case
     if(index>=v.size())
     {
        ans.push_back(output);
        return;
     }

     // exlude
     solve(v,ans,output,index+1);

     // include

     int element=v[index];
     output.push_back(element);
     solve(v,ans,output,index+1);

} 
int main()
{
    vector<int> v={1,2,3};
    int index=0;
    vector<int>output={};
    vector<vector<int>> ans;
    solve(v,ans,output,index);
}