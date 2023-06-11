#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int size)
{
 if(size==0 || size==1)
 {
    return true;
 }
 if(arr[0]>arr[1])
 {
    return false;
 }
 else{
    return isSorted(arr+1,size-1);
 }
}
int main()
{
    int arr[]={2,4,6,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,n);
}