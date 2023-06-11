#include<iostream>
using namespace std;
int main()
{
    /*
       1   
      121
     12321
    1234321 
    */
   /* Approach is to break this pyramid into two halves and solve */
   for(int i=1;i<=4;i++)
   {
    int space=4-i;
    for(int j=1;j<=space;j++)
    {
        cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<k;
    }
    
   
   // First Half Over
   if(i>1)
   for(int x=i-1;x>=1;x--)
   {
    cout<<x;
   }
   cout<<endl;
   }
}