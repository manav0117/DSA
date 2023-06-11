#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int> &stk,int elem)
{
  if(stk.empty() || (!stk.empty && elem<stk.top()))
  {
    stk.push(elem);
    return ;
  }
  int num=stk.top();
  stk.pop();
  sortedInsert(stk,elem);
  stk.push(num);
}
void sortStack(stack<int> &stk)
{
    if(stk.empty())
    {
        return ;
    }
    int elem=stk.top();
    stk.pop();
    sortStack(stk);
    sortedInsert(stk,elem);

}
int main()
{
    stk<int> stk;
    stk.push(9);
    stk.push(1);
    stk.push(11);
    sortStack(stk);
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
}
}