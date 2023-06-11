#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int profit=0;
        int current=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            // For finding the small price
            if(prices[i]<current){
                current=prices[i];
            }
            else if(prices[i]-current>profit)
           {
            profit=prices[i]-current;

           }
        }
        return profit;
    }
int main()
{
   vector<int> prices={3,2,5,6,10};
   cout<<maxProfit(prices);
}