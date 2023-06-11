#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int s, int e, int target)
{

    int mid = (s + e) / 2;
  //  cout << mid << endl;
    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            e = mid - 1;
            mid = (s + e) / 2;
        }
        else
        {
            s = mid + 1;
            mid = (s + e) / 2;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {7, 9, 1, 2, 3}; // target =7
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int target = 2;
    // Element can be present in first part or second part

    // let us first find the pivot element
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    int pivot=s;
    int idx;
    if(target>=arr[0])
    {
        idx=binary_search(arr,0,pivot-1,target);
    }
    else{
           idx=binary_search(arr,pivot,n-1,target);
     }
     cout<<idx;
}