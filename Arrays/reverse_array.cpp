#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int s=0,e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}