/* Given an integer N, count the numbers having an odd number of factors from 1 to N (inclusive).
 

Example 1:

Input:
N = 5
Output:
2
Explanation:
From 1 - 5 only 2 numbers,
1 and 4 are having odd number
of factors.
Example 2:

Input:
N = 1
Output:
1
Explanation:
1 have only 1(odd)
factor

Your Task:
You don't need to read input or print anything. Your task is to complete the function count() which takes an integer N as input parameters and returns an integer, the total count of numbers from 1 to N having an odd number of factors.
 

Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)
 

Constraints:
0 <= N <= 109  */






class Solution {
    public:
      int count(int N) {
          // code here
          int count = 0; 
          for(int i = 1;i*i<=N;i++){
              count += 1;
          }
          return count;
      }
  };