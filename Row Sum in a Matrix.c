/*  Given a 2-D integer matrix mat[][] of size n*m. Return a list of integers where list[i] represents the sum of elements of the ith row of the matrix.

Examples:

Input: mat = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output: [6, 15, 24]
Explanation: Row 1 -> 1+2+3=6, Row 2 -> 4+5+6=15, Row 3 -> 7+8+9=24 
Input: mat = [[1, 2], [10, 2], [3, 3]]
Output: [3, 12, 6]
Explanation: Row 1 -> 1+2=3, Row 2 -> 10+2=12, Row 3 -> 3+3=6 
Constraints:
1  <=  n, m  <=  1000  */







class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        vector<int>v;
        for(int i = 0;i<mat.size();i++){
            int sum = 0;
            for(int j =0;j<mat[0].size();j++){
                sum += mat[i][j];
            }
            v.push_back(sum);
        }
        return v;
    }
};
