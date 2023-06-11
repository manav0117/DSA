#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,2,1,89,32,45};
    int n=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<n-1;i++)
    {
        int x=arr[i];
        int idx=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<x )
           {
             idx=j;
             x=arr[j];
           }
        }
        swap(arr[i],arr[idx]);
    }
     
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}