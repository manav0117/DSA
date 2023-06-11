#include<bits/stdc++.h>
using namespace std;
void merge(int * arr,int s,int e,int mid)
{
    int i=s;    
    int j=mid+1;
    int k=s;
    int b[e+1];
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=e)
    {
        b[k]=arr[j];
        j++;
        k++;
    }
    for(int p=s;p<=e;p++)
    {
        arr[p]=b[p];
    }

}
void mergeSort(int *arr,int s,int e)
{
    if(s<e)
    {
        int mid=s+(e-s)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);
        // merge
        merge(arr,s,e,mid);
    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}