#include<bits/stdc++.h>
using namespace std;
int giveCount(int N)
{
     int a =sqrt(N);
     // if it is perfect square then n-1 else n
     if(a*a==N)
     {
        return a-1;
     }
     else{
        return a;
     }
}
int main()
{
    int N=15;
    cout<<giveCount(N);
}