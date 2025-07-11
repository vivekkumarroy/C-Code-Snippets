/* Given an array arr such that elements are in range [0, 1, ....n-1]. Our task is to divide the array into the maximum number of partitions that can be sorted individually and then concatenated to make the whole array sorted.

Examples:

Input: arr[] = [2, 1, 0, 3]
Output: 2
Explanation: If divide arr[] into two partitions [2, 1, 0] and [3], sort then and concatenate then, we get the whole array sorted.
Input: arr[] = [2, 1, 0, 3, 4, 5] 
Output: 4 
Explanation: If divide arr[] into two partitions [2, 1, 0], [3], [4], [5] sort then and concatenate then, we get the whole array sorted.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 105  */




class Solution {
public:
    int maxPartitions(vector<int>& arr) {
        int max_seen = 0;
        int count = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            max_seen = max(max_seen, arr[i]);
            if (max_seen == i) {
                count++;
            }
        }
        
        return count;
    }
};