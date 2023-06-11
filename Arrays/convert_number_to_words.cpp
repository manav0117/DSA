#include<bits/stdc++.h>
using namespace std;
string convert(int num)
{
    string result="";
    map<int,string> numbers={
       {1,"One"},
       {2,"Two"},
       {3,"Three"},
       {4,"Four"},
       {5,"Five"},
        {6,"Six"},
        {7,"Seven"},
        {8,"Eight"},
       {9,"Nine"},
        {10,"Ten"},
        {11,"Eleven"},
        {12,"Twelve"},
       {13,"Thirteen"},
        {14,"Fourteen"},
        {15,"Fifteen"},
        {16,"Sixteen"},
        {17,"Seventeen"},
        {18,"Eighteen"},
        {19,"Nineteen"},
        {20,"Twenty"},
       {30,"Thirty"},
       {40,"Fourty"},
       {50,"Fifty"},
       {60,"Sixty"},
       {70,"Seventy"},
       {80,"Eighty"},
       {90,"Ninety"},
       {100,"Hundred"},
       {1000,"Thousand"},
       {100000,"Lakh"},
    };
    while(num>0)
    {
        if(num>=100000)
        {
            int x=num/100000;
            result+=numbers[x]+" Lakh ";
            num=num%100000;


        }
        else if(num>=10000)
        {
            int x=num/10000 *10;
            result+=numbers[x];
            num=num%10000;
        }
     else if(num>=1000)
        {
            int x=num/1000;
            result+=numbers[x]+" Thousand ";
            num=num%1000;

        }
        else if(num>=100)
        {
            int x=num/100;
            result+=numbers[x]+" Hundred ";
            num=num%100;
        }
        else if(num>20)
        {
            int x=(num/10) *10;
            result+=numbers[x]+" ";
            num=num%10;

        }
        else{
            result+=numbers[num];
            num=num%num;
        }
    }
    return result;
}
// 1245
int main()
{
   cout<<convert(19);
} 