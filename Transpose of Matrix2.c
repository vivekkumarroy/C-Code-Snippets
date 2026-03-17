/*  You are given a square matrix of size n x n. Your task is to find the transpose of the given matrix.
The transpose of a matrix is obtained by converting all the rows to columns and all the columns to rows.

Examples :

Input: mat[][] = [[1, 1, 1, 1],
                [2, 2, 2, 2],
                [3, 3, 3, 3],
                [4, 4, 4, 4]]
Output: [[1, 2, 3, 4],
       [1, 2, 3, 4],
       [1, 2, 3, 4],
       [1, 2, 3, 4]]
Explanation: Converting rows into columns and columns into rows.
Input: mat[][] =  [[1, 2],
                 [9, -2]]
Output: [[1, 9],
        [2, -2]]
Explanation: Converting rows into columns and columns into rows.
Constraints:
1 ≤ n ≤ 103
-109 ≤ mat[i][j] ≤109   */







class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
    int  n =   mat.size();
    vector<vector<int>>mat1(n,vector<int>(n));
        for(int i= 0; i < n; i++){
            for(int j = i; j < n; j++){
                int temp = mat[i][j];
                mat1[i][j] = mat[j][i];
                mat1[j][i] = temp;
            }
        }
        return mat1;
    }
};