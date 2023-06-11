#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    cout<<"Max :"<<mx<<" "<<"Min : "<<mn;
}