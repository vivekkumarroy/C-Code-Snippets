/*  You are given a number n. You need to find the count of digits in n.

Examples :

Input: n = 1
Output: 1
Explanation: Number of digit in 1 is 1.
Input: n = 99999
Output: 5
Explanation: Number of digit in 99999 is 5
Constraints:
1 ≤ n ≤ 109 */







class Solution {
    public:
      int countDigits(int n) {
          // Code here
          if(n == 0){
              return 0;
          }
          return 1 + countDigits(n/10);
      }
  };