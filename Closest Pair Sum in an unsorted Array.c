/*  Given an array arr[] and an integer target. You have to find a pair in an array whose sum is closest to target.

Note: Return the pair in sorted order and if there are multiple such pairs return the pair with maximum absolute difference. If no such pair exists return an empty array.

Examples:

Input: arr[] = [40, 10, 29, 28, 22, 1, 30], target = 54 
Output: [22, 30]
Explanation: The pair 22 and 30 sums to 52 which is the closest sum to 54.
Input: arr[] = [10, 3, 4, 7, 1], target = 15 
Output: [4, 10]
Explanation: The pair 4 and 10 sums to 14 which is the closest sum to 15.
Constraints:
1 <= arr.size() <= 105
0 <= arr[i] <= 104
1 <= target <= 104  */


class Solution {
  public:
    vector<int> closestPairSum(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int p1 = 0, p2 = n - 1;
        int closestDiff = INT_MAX;
        vector<int> ans;
        while (p1 < p2) {
            int sum = arr[p1] + arr[p2];
            int currDiff = abs(sum - target);
            if (currDiff < closestDiff) {
                closestDiff = currDiff;
                ans = {arr[p1], arr[p2]};
            } 
            if (sum < target) {
                p1++;
            } else {
                p2--;  
            }
        }
        return ans;
    }
};

