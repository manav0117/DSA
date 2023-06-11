#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &stk,int elem)
{
    if(stk.empty())
    {
        stk.push(elem);
        return ;
    }
    int num=stk.top();
    stk.pop();
    insertAtBottom(stk,elem);
    stk.push(num);
}
void reverseStack(stack<int> &stk)
{
    if(stk.empty())
    {
        return ;
    }
    int elem= stk.top();
    stk.pop();
    reverseStack(stk);
    insertAtBottom(stk,elem);
}
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        stk.push(arr[i]);
    }
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    for(int i=0;i<n;i++)
    {
        stk.push(arr[i]);
    }
    reverseStack(stk);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }

}