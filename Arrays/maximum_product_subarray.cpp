#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,4,1,0,-33,-2};
    int n=sizeof(arr)/sizeof(int);
    int prod=1;
    int maxProd=INT_MIN;
    for(int i=0;i<n;i++)
    {
        prod*=arr[i];
        maxProd=max(maxProd,prod);
        if(prod==0)
        {
            prod=1;
        }
    }
    prod=1;
    for(int i=n-1;i>=0;i--)
    {
        prod*=arr[i];
        maxProd=max(maxProd,prod);
        if(prod==0)
        {
            prod=1;
        }
    }
    cout<<maxProd;
}