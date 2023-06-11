#include<iostream>
using namespace std;
int calculatePower(int a,int b)
{
    if(b==0)
    return 1;
    
    return a*calculatePower(a,b-1);
}
int main()
{
 int a=9,b=4;
 cout<<calculatePower(a,b);
}