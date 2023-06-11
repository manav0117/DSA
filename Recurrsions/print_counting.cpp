#include<bits/stdc++.h>
using namespace std;

void pc(int n)
{
    if(n==0)
    return ;
    
    cout<<n<<endl;
    pc(n-1);
}
int main()
{
  int n;
  cin>>n;
  pc(n);
} 