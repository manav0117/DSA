#include<bits/stdc++.h>
using namespace std;
void deleteMiddle(stack<int> &stk,int count,int size)
{
  if(count==size/2)
  {
    stk.pop();
    return ;
  }
  int num=stk.top();
  stk.pop();
  deleteMiddle(stk,count+1,size);
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
    deleteMiddle(stk,0,stk.size());

   while(!stk.empty())
   {
    cout<<stk.top()<<" ";
    stk.pop();
   }
}