#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,5,6,7,8,9,0,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int key=2;
    
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            cout<<"Found ";
           return 0;
        }
        else if(arr[s]<arr[mid])
        {
            if(key>=arr[s] && key<=arr[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key>=arr[mid] && key<=arr[e])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    cout<<"Not found";
}