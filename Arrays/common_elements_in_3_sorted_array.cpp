#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4,8,10,10};
    vector<int> b={2,4,6,8,10,12};
    vector<int> c={3,4,6,9,10,12};
    int i=0;
    int j=0;
    int k=0;
    int l1=a.size();
    int l2=b.size();
    int l3=c.size();
    while(i<l1 && j<l2 && k<l3)
    {
           if(a[i]==b[j] && b[j]==c[k])
           {
            cout<<a[i]<<" ";
            i++;
            j++;
            k++;
           }
           else if(a[i]<b[j])
           {
            i++;
           }
           else if(b[j]<c[k])
           {
            j++;
           }
           else{
            k++;
           }
           
           // This case if for if identical elements are present
           int xx=a[i-1];
           while(a[i]==xx)i++;
           int yy=b[j-1];
           while(b[j]==yy)j++;
           int zz=c[k-1];
           while(c[k]==zz)k++;
    }
}