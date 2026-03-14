/*   Given an array arr[] of size n consisting of distinct integers from 1 to n. Your task is to sort the array without using extra space
Challenge: Try to solve it using linear time complexity.

Examples: 

Input: [2, 1, 5, 4, 3]
Output: [1, 2, 3, 4, 5]
Input: [1, 2, 3, 4, 5, 6]
Output: [1, 2, 3, 4, 5, 6]
Input: [1]
Output: [1]
Constraints:
1  <=  n  <= 106  */



// User function Template for C++

class Solution {
  public:
    vector<int> sortArray(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        unordered_set<int>hs;
        for(auto num : arr){
            hs.insert(num);
        }
        
        for(int i = 1;i<=n;i++){
            if(hs.find(i) != hs.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};