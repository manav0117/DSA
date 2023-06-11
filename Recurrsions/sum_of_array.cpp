#include<bits/stdc++.h>
using namespace std;
int giveTotal(int *arr,int size)
{
    if(size==1)
    {
        return arr[0];
    }
    return arr[0]+giveTotal(arr+1,size-1);
}
int main()
{
    int arr[]={3,6,1,7};
    
    int n=sizeof(arr)/sizeof(int);
    cout<<giveTotal(arr,n);

}