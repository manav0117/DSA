#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 2, 3, 3, 4};
    unordered_map<int, int> mp;
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i <n;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
      if(mp[arr[i]]==1)
      {
        cout<<arr[i];
      }
    }
}