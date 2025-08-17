/*  You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.

Note: Positive number starts from 1. The array can have negative integers too.

Examples:

Input: arr[] = [2, -3, 4, 1, 1, 7]
Output: 3
Explanation: Smallest positive missing number is 3.
Input: arr[] = [5, 3, 2, 5, 1]
Output: 4
Explanation: Smallest positive missing number is 4.
Input: arr[] = [-8, 0, -1, -4, -3]
Output: 1
Explanation: Smallest positive missing number is 1.
Constraints:  
1 ≤ arr.size() ≤ 105
-106 ≤ arr[i] ≤ 106  */






class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        unordered_set<int> hs;
        for(auto num : arr){
            hs.insert(num);
        }
        for(int i = 1;i <= arr.size();i++){
            if(hs.find(i) == hs.end()){
                return i;
            }
        }
        return arr.size() + 1;
    }
};