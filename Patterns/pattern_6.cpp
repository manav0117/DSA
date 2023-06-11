#include<iostream>
using namespace std;
int main()
{
    string mapping[4]= {"A","B","C","D"};
    /*
    D                     4
    C D                   3 4
    B C D                 2 3 4
    A B C D               1 2 3 4
    */

   for(int i=0;i<4;i++){

    for(int j=0;j<=i;j++)
    {
         cout<<4-i+j<<" ";
    }
    cout<<endl;
   }
}