#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>=current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
     // 3 4 2 1 at i=1
    // 2 3 4 1 at i=2
    // 1 2 3 4 at i=3
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}