#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="01001110101";
    int n=s.length();
    int x=0,y=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==0)
        {
            x++;
        }
        else if(s[i]==1)
        {
            y++;
        }
        if(x==y)
        {
            c++;
        }
    }
    if(x!=y)
    {
        cout<<"-1";
    }
    else{
        cout<<c;
    }
}