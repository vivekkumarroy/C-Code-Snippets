/* Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [100, 200, 300, 400] , k = 2
Output: 700
Explanation: arr3  + arr4 = 700, which is maximum.
Input: arr[] = [100, 200, 300, 400] , k = 4
Output: 1000
Explanation: arr1 + arr2 + arr3 + arr4 = 1000, which is maximum.
Input: arr[] = [100, 200, 300, 400] , k = 1
Output: 400
Explanation: arr4 = 400, which is maximum.
Constraints:
1 <= arr.size() <= 106
1 <= arr[i]<= 106
1 <= k<= arr.size()  */





class Solution {
    public:
      int maximumSumSubarray(vector<int>& arr, int k) {
          // code here
          int n = arr.size();
          long sum = 0;
          for(int i = 0; i < k; i++){
              sum += arr[i];
          }
          
          int s = 1,e = k;
          long maxValue = sum;
          while(e<n){
            sum = sum-arr[s-1]+arr[e];
            maxValue = max(maxValue,sum); 
            s++;
            e++;
          }
         return maxValue; 
      }
  };