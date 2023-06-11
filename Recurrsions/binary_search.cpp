#include<iostream>
using namespace std;

bool isSorted(int *arr,int size)
{
    if(size==0|| size==1)
    return true;

    if(arr[0]>arr[1])
    {
        return false;
    }

    return isSorted(arr+1,size-1);
}
bool binarySearch(int *arr,int s,int e,int size,int key)
{
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    else if(s>e)
    {
        return false;
    }
    else if(arr[mid]>key)
    {
        return binarySearch(arr,s,mid-1,size,key);  
    }
    
     else
    {
        return binarySearch(arr,mid+1,e,size,key);  
    }

   
    
    
}
int main()
{
int arr[]={2,4,6,7,10};
int n=sizeof(arr)/sizeof(int);
if(isSorted(arr,n))
{
  cout<<binarySearch(arr,0,n-1,n,10);
}
else{
    cout<<"Search not possible";
}
}