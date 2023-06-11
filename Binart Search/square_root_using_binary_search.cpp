#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  int arr[num];
  for(int i=0;i<num;i++)
  {
    arr[i]=i+1;
  }
  int s=0;
  int n=sizeof(arr)/sizeof(int) ;
  int e=n-1;
  int mid=s+(e-s)/2;
  int ans;
  while(s<=e)
  {
      int square=arr[mid]*arr[mid];
    if(square==num)
    {
        
        ans=arr[mid];
        break;
    }
    else if(square>num){
        e=mid-1;
    }
    else{
        ans=arr[mid];
        s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  cout<<ans;
  return 0;

   
}