#include<iostream>
using namespace std;
int main()
{
     /*
     1 2 3 4 
       2 3 4
         3 4
           4
    */

   for(int i=4;i>=1;i--)
   {
    int space =4-i;
     for(int j=0;j<space;j++)
     {
        cout<<" ";
     }
     for(int k=4-i+1;k<=4;k++)
     {
       cout<<k;
     }
     cout<<endl;
   }
}