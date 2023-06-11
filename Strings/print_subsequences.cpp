#include<bits/stdc++.h>
using namespace std;
void printSubsequence(string str,string &result,int index)
{
   if(index==str.length())
   {
    return ;
   }
   // exlude 
   printSubsequence(str,result,index+1);
   // include
   result+=str[index];
   printSubsequence(str,result,index+1);
}
int main()
{
    string str="abc";
    string result="";
    printSubsequence(str,result,0);
    cout<<result;
}