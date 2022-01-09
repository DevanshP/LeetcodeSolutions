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
