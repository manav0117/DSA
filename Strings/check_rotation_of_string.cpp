#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="Manav";
    string s2="Ekta";
    // Logic : Add both strings 
    s1=s1.append(s1);
    // if find function could not find it represents npos value(Maximum value for a 32 bit integer)
    if(s1.find(s2)!=string::npos)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}