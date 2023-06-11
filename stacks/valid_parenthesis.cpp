#include<bits/stdc++.h>
using namespace std;
bool validParenthesis(stack<char> &stk,string parenthesis,int index)
{
     if(stk.empty() && index==parenthesis.length())
    {
        return true;
    }
    else if(parenthesis[index]=='{')
    {
        stk.push('{');
    }
    else if(parenthesis[index]='}'&& !stk.empty() && stk.top()=='{')
    {
        stk.pop();
    }
    else{
        return false;
    }
    return validParenthesis(stk,parenthesis,index+1);
}
int main()
{
    string parenthesis="{{}}}";
    stack<char> stk;
    cout<<validParenthesis(stk,parenthesis,0);
}