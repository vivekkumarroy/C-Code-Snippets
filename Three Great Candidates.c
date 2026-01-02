/*  The hiring team aims to find 3 candidates who are great collectively. Each candidate has his or her ability expressed as an integer. 3 candidates are great collectively if the product of their abilities is maximum. Given the abilities of some candidates in an array, arr[], return the maximum collective ability from the pool of candidates.

Examples:

Input: arr[] = [10, 3, 5, 6, 20]
Output: 1200
Explanation: Multiplication of 10, 6, and 20 is 1200.
Input: arr[] = [-10, -3, -5, -6, -20]
Output: -90
Explanation: Multiplication of -3, -5 and -6 is -90.
Constraints:
3 ≤ arr.size ≤ 105
-103 ≤ arr[i] ≤ 103

  */




  // User function template for C++

class Solution {
  public:
    int maxProduct(vector<int> arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        return max(arr[0]*arr[1]*arr[n-1] ,arr[n-1]*arr[n-2]*arr[n-3]);
    }
};