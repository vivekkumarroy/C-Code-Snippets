/*   You are given a binary number as a string of characters ('0' and '1'). Your task is to determine whether this binary number is divisible by 3. 
Note: Try to accomplish this using a single traversal of the input binary string.

Examples:

Input: s = "100"
Output: false
Explanation: "100"'s decimal equivalent is 4, which is not divisible by 3.
Input: s = "0011"
Output: true
Explanation: "0011" is 3, which is divisible by 3.
Input: s = "110"
Output: true
Explanation: The decimal equivalent of "110" is 6, which is divisible by 3.
Constraints:
1 ≤ s.size() ≤ 106
The string s contains only '0' and '1'.  */







// User function template for C++
class Solution {
    public:
      bool isDivisible(string& s) {
          // code here
          int rem = 0;
          for (char c : s) {
              rem = (rem * 2 + (c - '0')) % 3;
          }
          return rem == 0;
      }
  };