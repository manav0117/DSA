#include<bits/stdc++.h>
using namespace std;
void countAndSay(int n, string *mapping)
{
    if(n==0)
    {
        return ;
    }
    int digit=n%10;
    n=n/10;
    countAndSay(n,mapping);
    cout<<mapping[digit]<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    string mapping[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    countAndSay(n,mapping);
    
}