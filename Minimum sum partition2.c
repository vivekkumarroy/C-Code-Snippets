/*   Given an array arr[]  containing non-negative integers, the task is to divide it into two sets set1 and set2 such that the absolute difference between their sums is minimum and find the minimum difference.

Examples:

Input: arr[] = [1, 6, 11, 5]
Output: 1
Explanation: 
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11 
Hence, minimum difference is 1.  
Input: arr[] = [1, 4]
Output: 3
Explanation: 
Subset1 = {1}, sum of Subset1 = 1
Subset2 = {4}, sum of Subset2 = 4
Hence, minimum difference is 3.
Input: arr[] = [1]
Output: 1
Explanation: 
Subset1 = {1}, sum of Subset1 = 1
Subset2 = {}, sum of Subset2 = 0
Hence, minimum difference is 1.
Constraints:
1 ≤ arr.size()*|sum of array elements| ≤ 105
1 <= arr[i] <= 105  */






class Solution {
public:
    int minDifference(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;
        for(int num : arr) {
            totalSum += num;
        }
        
        int target = totalSum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        for(int num : arr) {
            for(int j = target; j >= num; j--) {
                if(dp[j - num]) {
                    dp[j] = true;
                }
            }
        }
        int maxAchievable = 0;
        for(int j = target; j >= 0; j--) {
            if(dp[j]) {
                maxAchievable = j;
                break;
            }
        }
        return totalSum - 2 * maxAchievable;
    }
};
