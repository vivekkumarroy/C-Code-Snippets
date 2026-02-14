/*    Given two integer values n and r, the task is to find the value of Binomial Coefficient nCr

A binomial coefficient nCr can be defined as the coefficient of xr in the expansion of (1 + x)n that gives the number of ways to choose r objects from a set of n objects without considering the order.
The binomial coefficient nCr is calculated as : C(n,r) = n! / r! * (n-r) !
Note: If r is greater than n, return 0.
It is guaranteed that the value of nCr will fit within a 32-bit integer.

Examples:

Input: n = 5, r = 2
Output: 10
Explaination: The value of 5C2 is calculated as 5!/(5−2)!*2! = 5!/3!*2! = 10.
Input: n = 2, r = 4
Output: 0
Explaination: Since r is greater than n, thus 2C4 = 0
Input: n = 5, r = 0
Output: 1
Explaination: The value of 5C0 is calculated as 5!/(5−0)!*0! = 5!/5!*0! = 1.
Constraints:
1 ≤ n ≤ 100
0 ≤ r ≤ 100  */




class Solution {
  public:
    int nCr(int n, int r) {
        
            if (r > n) return 0;
        
        if (r == 0 || r == n) return 1;
        
        vector<vector<int>> dp(n + 1, vector<int>(r + 1, 0));
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= min(i, r); j++) {
                
                if (j == 0 || j == i)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }
        
        return dp[n][r];
    }
};
