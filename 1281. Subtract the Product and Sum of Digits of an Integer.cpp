//1281. Subtract the Product and Sum of Digits of an Integer (LEETCODE PROBLEM)
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod =1;
        int sum =0;
        while(n!=0){
            
            int digit = n%10;   // taking out value of n
            prod = prod*digit; 
            sum = sum+digit;
            n = n/10;
            
        }
        int answer = prod - sum;
        return answer;
        
        
        
    }
};
************************************************************************************************************************
//Another Approach if you want to INPUT FROM USER AND FIND OUTPUT 
#include <iostream>

using namespace std;

int main()
{
   int n,sum=0,product=1,digit,result;
   cout<<"Enter a number"<<endl;
   cin>>n;
   while(n>0){
       digit = n % 10;
       product = product*digit;
       sum = sum+digit;
       n = n /10;
   }
   result = product - sum;
   cout<<"The Result is "<<result;
    return 0;
}
