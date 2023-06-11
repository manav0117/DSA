#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="abaa";
    string s2="xyxx";
    unordered_map<char,char> mp;
    if(s1.length()!=s2.length())
    {
        cout<<"False";
        return 0;
    }

    for(int i=0;i<s1.length();i++)
    {
        if(!mp[s1[i]])
        {
            mp[s1[i]]=s2[i];
        }
    }
    for(int i=0;i<s1.length();i++)
    {
        if(mp[s1[i]])
        {
            s1[i]=mp[s1[i]];
        }
    }
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }
        else{
            cout<<"False";
            return 0;
        }
    }
    cout<<"Yes";
    
}