#include<bits/stdc++.h>
using namespace std;
bool isPossible(int *arr,int n,int k,int mid)
{
    int students=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
           pageSum+=arr[i];
        }
        else{
            students++;
            if(students>k || mid<arr[i])
            {
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;

}
int main()
{
    int arr[]={10,20,30,40};
    int sum=0;
    int s=0;
    int k=2;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(isPossible(arr,n,k,mid))
        {
          ans=mid;
          e=mid-1;
          
        }
        else{
         s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;

}