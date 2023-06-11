#include<bits/stdc++.h>
using namespace std;
class Tour{
    public:
    int petrol;
    int distance;
}
int main()
{
 Tour obj[6];
 int petrols[6]={6,7,4,10,6,5};
 int distances[6]={5,6,7,8,6,4};
 for(int i=0;i<6;i++)
 {
    obj[i].petrol=petrols[i];
    obj[i].distance=distances[i];
 }

 int start=0;
 int deficit=0;
 int balance=0;
 for(int i=0;i<6;i++)
 {
    balance+=obj[i].petrol-obj[i].distance;
    if(balance<0)
    {
        deficit+=balance;
        start=i+1;
        balance=0;
    }
 }
 if(balance+deficit>=0)
 {
    cout<<start;
 }
 else{
    cout<<"-1";
 }
},