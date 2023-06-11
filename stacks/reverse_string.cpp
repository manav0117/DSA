#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Manav";
    stack<char> stk;
    for(int i=0;i<s.length();i++)
    {
        stk.push(s[i]);
    }
    int c=0;
    while(!stk.empty())
    {
        s[c]=stk.top();
        c++;
        stk.pop();
    }

   cout<<s;
}
