/* As we mentioned earlier, bitwise operations can be used to find number of subsets. Here, we will use that.

Given an array arr of N elements. The task is to count all the subsets whose sum is even.

Example:

Input:N = 3
arr[] = 1 2 3
Output:3
Explanation: Three subsets are there whose sum of elements is even. Subsets are (3, 2, 1), (1, 3), (2).
 

Your Task:
Your task is to complete the function countSumSubsets() which counts all the subsets in which sum of all the elements is even. Print the count of subsets whose sum of all elements is even.

Constraints:
1 <= N <= 10
1 <= arr[i] <= 10  */






/*Function to count subset with even sum
 * arr : array input
 * N : size of array
 */
 class Solution {
    public:
      int countSumSubsets(int arr[], int N) {
  
          // Your code here
          int count = 0;
          for(int i = 0; i < (1<<N); i++){
              
              int sum = 0;
              for(int j = 0;j < N; j++){
                  if((i >> j)&1){
                      sum += arr[j]; 
                  
                  }
                  
              }
              if((sum&1)==0){
                      count++;
              }
          }
          return count-1;
      }
  };