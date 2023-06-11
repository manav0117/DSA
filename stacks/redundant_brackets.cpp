#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(a+(b*C))";
    stack<char> stk;
    bool isRedudant=true;
    // Redundant logic : If ( or Operator push  , If ) check if top is operator then pop
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='+'|| ch=='-'|| ch=='*'|| ch=='/')
        {
            stk.push(ch);
        }
        else{
            if(ch==')')
            {
                while(stk.top()!='(')
                {
                    isRedundant=true;
                    char top=stk.top();
                    if( top=='+'|| top=='-'|| top=='*'|| top=='/')
                    {
                        isRedudant=false;
                    }
                    stk.pop();
                }
                if(isRedudant==true)
                break;
                stk.top();
            }
        }
    }
    cout<<isRedudant<<endl;

}