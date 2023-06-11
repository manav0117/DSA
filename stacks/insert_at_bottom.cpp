#include<bits/stdc++.h>
using namespace std;
void insertBottom(stack<int> &stk,int key)
{
    if(stk.empty())
    {
        stk.push(key);
        return ;
    }
    int num=stk.top();
    stk.pop();
    insertBottom(stk,key);
    stk.push(num);
}
int main()
{
    stack<int> stk;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        stk.push(arr[i]);
    }
    insertBottom(stk,10);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }

}