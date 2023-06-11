#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,3,2,1,0,-1};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {    // Starting slope
         if(arr[mid]<arr[mid+1])
         {
            s=mid+1;
         }
         // Ending slope
         else{
            e=mid;
         }
         mid=s+(e-s)/2;
    }
    cout<<s;
}