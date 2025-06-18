/*  Given an array of integers of size N find minimum xor of any 2 elements.


Example 1:

Input:
N = 3
arr[] = {9,5,3}
Output: 6
Explanation: 
There are 3 pairs -
9^5 = 12
5^3 = 6
9^3 = 10
Therefore output is 6.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function minxorpair() which takes the array arr[], its size N as input parameters and returns the minimum value of xor of any 2 elements.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

 

Constraints:
1 <= N <= 105
1 <= arr[i] <= 105  */





// User function Template for C++

class Solution {
    public:
      int minxorpair(int N, int arr[]) {
          // code here
          int minValue = INT_MAX;
         sort(arr,arr+N);
         for(int i =0; i < N-1;i++) {
             minValue = min(arr[i]^arr[i+1],minValue);
         }
         return minValue;
      }
  };