#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int check=i;
        for(int j=1;j<=5-i+1;j++)
        {
            cout<<j;
        }
        if(i>=2)
        {
            for(int s=(i-1)*2;s>=0;s--)
            {
                cout<<"*";
            }
        }
        for(int k=5-i+1;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
}