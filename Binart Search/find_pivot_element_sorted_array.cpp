#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={7,9,1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<e)
{
    if(arr[mid]<arr[mid-1])
    {
       s=mid;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
cout<<s<<endl;

}