#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int s,int e)
{
   int pivot=arr[s];
   // count elements less then pivot
   int cnt=0;
   for(int i=s+1;i<=e;i++)
   {
       if(arr[i]<pivot)
       {
        cnt++;
       }
   }
   // place it in the right place
   int pivotIdx=s+cnt;
   swap(arr[s],arr[pivotIdx]);

   // logic for left<pivot and right>pivot part

   int i=s,j=e;
   while(i<pivotIdx && j>pivotIdx)   // 3 5 4 1 7 8
   {
      while(arr[i]<=pivot)
      {
        i++;
      }
      while(arr[j]>=pivot)
      {
        j--;
      }
      if(i<pivotIdx && j>pivotIdx)
      {
          swap(arr[i],arr[j]);
      }
   }
   return pivotIdx;
}

void quickSort(int *arr,int s,int e)
{
    if(s<=e){
    // partition part
    int idx=partition(arr,s,e);

    // divide it
    quickSort(arr,s,idx-1);
    quickSort(arr,idx+1,e);
    }
}
int main()
{
    int arr[]={4,3,5,1,7,8};
    int n=sizeof(arr)/sizeof(int);
    quickSort(arr,0,n-1);
    
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}