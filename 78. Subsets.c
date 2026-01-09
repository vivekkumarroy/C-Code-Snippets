/*   Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.  */








class Solution {
public:

    void allSubsets(int i ,vector<int>&nums,int n,vector<vector<int>>&ans,vector<int>&current){

        if(i == n){
            ans.push_back(current);
            return ;
        }

        current.push_back(nums[i]);
        allSubsets(i+1,nums,n,ans,current);
        current.pop_back();
        allSubsets(i+1,nums,n,ans,current);
        return ;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sunset;
        allSubsets(0,nums,nums.size(),ans,sunset);
        return ans;
    }
};