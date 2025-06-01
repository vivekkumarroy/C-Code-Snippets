/* Given a number n having only one ‘1’ and all other ’0’s in its binary representation, find the position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. The position of set bit '1' should be counted starting with 1 from the LSB side in the binary representation of the number.

Examples:

Input: n = 2
Output: 2
Explanation: 2 is represented as "10" in Binary. As we see there's only one set bit and it's in position 2.
Input: n = 5
Output: -1
Explanation: 5 is represented as "101" in Binary. As we see there's two set bits and thus the output -1.
Constraints:
0 <= n <= 108  */







class Solution {
    public:
      int findPosition(int n) {
          // code here
          int position  = 0 ,count = 0;
          while(n!=0){
              if(n&1){
                  position++;
              }
              n = n >> 1;
              count++;
          }
          
          if(position == 0 || position > 1){
              return -1;
          }
          
          return count; 
      }
  };