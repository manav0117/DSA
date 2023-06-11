#include<bits/stdc++.h>
using namespace std;
// -1 -2 2 1 -3 4 5  6

void equalize(stack<int> &stk,queue<int> &q)
{
    if(stk.empty())
    {
        return ;
    }
    int elem=stk.top();
    stk.pop();
    equalize(stk,q);
    q.push(elem);
}
int main()
{
  queue<int> q;
  stack<int> stk;
  int arr[]={-1,-2,2,1,-3,4,5,6};
  int n=sizeof(arr)/sizeof(int);
  for(int i=0;i<n;i++)
  {
    if(arr[i]<0)
    {
        stk.push(arr[i]);
    }
    else{
        q.push(arr[i]);
    }
  }
  equalize(stk,q);
  while (q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
    /* code */
  }
  
}
// -3
// -2
// -1