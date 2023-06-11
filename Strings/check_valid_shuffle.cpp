#include<bits/stdc++.h>
using namespace std;
bool isValidShuffle(string str,string s1,string s2)
{
    if(str.length()!=s1.length()+s2.length())
    {
        return false;
    }
    int i=0,j=0,k=0;
    while(k<str.length())
    {
        if(i<s1.length() && str[k]==s1[i])
        {
            i++;
        }
        else if(j<s2.length() && str[k]==s2[j])
        {
            j++;
        }
        else{
            return false;
        }
        k++;
    }
    return ((i==s1.length()) && (j==s2.length()));
}
int main()
{
    string s1="xy";
    string s2="12";
    string str="x1y2";
    if(isValidShuffle(str,s1,s2))
    {
        cout<<"Valid";
    }
    else{
        cout<<"No";
    }
   
    
}