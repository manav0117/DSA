#include<bits/stdc++.h>
using namespace std;
    int climbStairs(int n)
    {
        if(n==0)
        return 0;
        else if(n==1)
        return 1;

        return climbStairs(n-2)+climbStairs(n-1);
    }
int main()
{
cout<<climbStairs(3);
}