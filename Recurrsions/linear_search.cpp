#include<iostream>
using namespace std;
bool linearSearch(int *arr,int key,int size)
{
    if(size==0)
    return false;

    if(arr[0]==key)
    {
        return true;
    }
    return linearSearch(arr+1,key,size-1);
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8};
  int n=sizeof(arr)/sizeof(int);
  int key=8;
  cout<<linearSearch(arr,key,n);
}