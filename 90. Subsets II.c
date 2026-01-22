/*  Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10  */




class Solution {
public:

void subset(int i ,vector<pair<int,int>>&f,vector<vector<int>>&ans, vector<int> &temp,int n){
        if(i == n){
            ans.push_back(temp);
            return ;
        }
     
    int ele = f[i].first, fre = f[i].second;
    for(int l = 1; l <= fre;l++){
        temp.push_back(ele);
        subset(i+1,f,ans,temp,n);
    }
    for(int l = 1; l <= fre;l++){
        temp.pop_back();
    }
     subset(i+1,f,ans,temp,n);
    return;
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        unordered_map<int,int>hm;
        vector<vector<int>>ans;
         vector<int>temp;
        for(auto ele : nums){
            hm[ele]++;
        }
        vector<pair<int,int>>f;
        for(auto ele : hm){
            f.push_back({ele.first,ele.second});
        }

        subset(0,f,ans,temp,f.size());
         return ans;
    }
};