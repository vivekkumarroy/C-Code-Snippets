/*  Given an array arr containing both positive and negative integers, the task is to compute the length of the largest subarray that has a sum of 0.

Examples:

Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
Output: 5
Explanation: The largest subarray with a sum of 0 is [-2, 2, -8, 1, 7].
Input: arr[] = [2, 10, 4]
Output: 0
Explanation: There is no subarray with a sum of 0.
Input: arr[] = [1, 0, -4, 3, 1, 0]
Output: 5
Explanation: The subarray is [0, -4, 3, 1, 0].
Constraints:
1 ≤ arr.size() ≤ 106
−103 ≤ arr[i] ≤ 103, for each valid i  */








/*You are required to complete this function*/

class Solution {
    public:
      int maxLen(vector<int>& arr) {
          // code here
          
          int n = arr.size();
          vector<long>pSum(n);
          long sum = 0;
          for(int i = 0; i < n; i++){
              sum += arr[i];
              pSum[i] = sum;
          }
          
          unordered_map<long,int>um;
          um[0] = -1;
          int ans = 0;
          for(int i = 0;i < n; i++){
              if(um.find(pSum[i]) == um.end()){
                  
                  um[pSum[i]] = i; 
              }
              else{
                  int l = i - um[pSum[i]];
                  ans = max(ans,l);
              }
          }
          return ans;
      }
  };