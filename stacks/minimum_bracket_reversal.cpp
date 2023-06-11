#include<bits/stdc++.h>
using namespace std;
int check(stack<char> &stk,string s)
{
    if(s.length()%2!=0)
    {
        return -1;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='{')
        {
            stk.push(ch);
        }
        else{
            if(!stk.empty() && stk.top()=='{')
            {
                stk.pop();
            }
            else{
                stk.push(ch);
            }
        }
        
    }
    // Now stack has only invalid expressions
    int a=0,b=0;
    while(!stk.empty())
    {
        if(stk.top()=='{')
        {
            a++;
        }
        else{
            b++;
        }
        stk.pop();
    }
    int ans=(a+1)/2 + (b+1)/2;
    return ans;
}
int main()
{
    stack<char> stk;
    string s="{{{}{}{}";
    int flag= check(stk,s);
    if(flag==-1)
    cout<<"Invalid";
    else{
        cout<<"Ways : "<<flag<<endl;
    }

}