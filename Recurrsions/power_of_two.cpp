#include<bits/stdc++.h>
using namespace std;
int power_two(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 2;

    return 2*power_two(n-1);
}
int main()
{
 cout<<power_two(3);
}