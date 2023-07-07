/* Question
For a given non-negative integer N, find the next smallest Happy Number.
A number is called Happy if it leads to 1 after a sequence of steps. Wherein at each step the number is replaced by the sum of squares of its digits that is,
if we start with Happy Number and keep replacing it with sum of squares of its digits, we reach 1 at some point.
Example 1:

Input:
N = 8
Output:
10
Explanation:
Next happy number after 8 is 10 since
1*1 + 0*0 = 1
Example 2:

Input:
N = 10
Output
13
Explanation:
After 10, 13 is the smallest happy number because
1*1 + 3*3 = 10, so we replace 13 by 10 and 1*1 + 0*0 = 1. */

public:
    bool happy(int n)
        {
            if(n==2 || n==3 || n==4 || n==5 || n==6 || n==8 || n==9)
            return false;
            
            if(n==1 || n==7)
            return true;
            
            int sum=0;
            while(n)
            {
                sum+=(n%10)*(n%10);
                n=n/10;
                
            }
            
            if(happy(sum))
            return true;
            else
            return false;
        }
    int nextHappy(int N){
        N++;
        while(N<=1e9)
        {
            if(happy(N))
            return N;
            
            N++;
        }
        return -1;
        
        // code here
    }
