/*   Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106  */



class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>ans;
        for(auto ele : nums1){
            ans.push_back(ele);
        }
        for(auto ele : nums2){
            ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());

        int d = ans.size();
        if(d%2== 0){
            return (ans[d/2] + ans[d/2 -1])/2;
        }
        return ans[d/2];

    }
};