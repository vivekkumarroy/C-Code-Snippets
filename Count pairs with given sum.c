/*   
You are given an array arr[] and an integer target. You have to count all pairs in the array such that their sum is equal to the given target.

Examples:

Input: arr[] = [1, 5, 7, -1, 5], target = 6 
Output: 3
Explanation: Pairs with sum 6 are (1, 5), (7, -1) and (1, 5). 
Input: arr[] = [1, 1, 1, 1], target = 2 
Output: 6
Explanation: Pairs with sum 2 are (1, 1), (1, 1), (1, 1), (1, 1), (1, 1), (1, 1).
Input: arr[] = [10, 12, 10, 15, -1], target = 125
Output: 0
Explanation: There is no pair with sum = target
Constraints:
1 ≤ arr.size() ≤ 105
-104 ≤ arr[i] ≤ 104
0 ≤ target ≤ 104  */




class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>hm;
        int n = arr.size();
        int count = 0;
        for(int i = 0;i < n; i++){
               
               if(hm.find(target-arr[i]) != hm.end()){
                   count += hm[target-arr[i]];
               } 
             hm[arr[i]]++;  
        }
        return count;
    }
}; 