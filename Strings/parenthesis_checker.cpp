#include<bits/stdc++.h>
using namespace std;
 bool ispar(string x)
    {
        if(x.length()==1)
        return false;
        stack<char> stk;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            {
                stk.push(x[i]);
            }
            else if(stk.empty() and i<x.length())
            {
                stk.push(x[i]);
            }
            else if((x[i]=='}' && stk.top()=='{') || (x[i]==')' && stk.top()=='(') || (x[i]==']' && stk.top()=='[') )
            {
                stk.pop();
            }
            else{
                stk.push(x[i]);
            }
        }
        if(stk.empty())
        {
            return true;
        }
        return  false;
    }
int main()
{
    string x=" (())";
    cout<<ispar(x);
   
}