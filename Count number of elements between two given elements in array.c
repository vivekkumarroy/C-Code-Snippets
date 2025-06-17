/* Given an unsorted array arr[] and two elements num1 and num2. The task is to count the number of elements that occur between the given elements (excluding num1 and num2). If there are multiple occurrences of num1 and num2, we need to consider the leftmost occurrence of num1 and the rightmost occurrence of num2.

Examples:

Input: arr[] = [4, 2, 1, 10, 6], num1 = 4, and num2 = 6
Output: 3
Explanation: We have an array [4, 2, 1, 10, 6] and num1 = 4 and num2 = 6. So, the left most index of num1 is 0 and rightmost index of num2 is 4. So, the total number of element between them is [2, 1, 10] So, answer is 3.
Input: arr[] = [3, 2, 1, 4], num1 = 2, and num2 = 4
Output: 1
Explanation: here in array [3, 2, 1, 4] only one element [1] occur betweeen 2 and 4, So, answer is 1.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
2 ≤ arr.size() ≤ 106
1 ≤ arr[i], num1, num2 ≤ 106  */





class Solution {
    public:
      int getCount(vector<int> &arr, int num1, int num2) {
          // Your code goes here.
          int indexNum1 = 0,indexNum2 = 0;
          int n = arr.size();
            for(int i = 0; i <n ;i++){
              if(arr[i] == num1){
                  indexNum1 = i;
                   break;
              }
            }
            
            for(int i = n-1 ; i>=0;i--){
              if(arr[i] == num2){
                  indexNum2 = i;
                   break;
              }
            }
            
            int res = indexNum2 - indexNum1 - 1;
              
         return res > 0 ? res : 0; 
          
      }
  };