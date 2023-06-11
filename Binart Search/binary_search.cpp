#include<iostream>
using namespace std;
int binary_search(int *arr,int n,int key){
int s=0;
int e=n-1;
int mid=(s+e)/2;
cout<<mid<<endl;
while(s<=e)
{
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]>key)
    {
         e=mid-1;
  mid=(s+e)/2;
        
    }
    else{
   s=mid+1;
        mid=(s+e)/2;
    }
}
return -1;
}
int main()
{
int arr[]={2,5,9,10,35,45,49,51};
int n=sizeof(arr)/sizeof(int);
int idx=binary_search(arr,n,35);
cout<<idx<<endl;
if(idx!=-1)
{
    cout<<"Found at "<<idx+1;
}
else{
    cout<<"Not found";
}

}