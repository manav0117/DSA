#include<bits/stdc++.h>
using namespace std;
int main()
{
  /* 
      *
     **
    ***
   ****   
  */
 for(int i=1;i<=4;i++)
 {
   int space=4-i;
   for(int j=0;j<space;j++)
   {
    cout<<" ";
   }
   for(int k=0;k<i;k++)
   {
    cout<<"*";
   }
   cout<<endl;
 }
}