/*  Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 

Examples:

Input: mat[][] = [[0, 1, 2], 
                [3, 4, 5], 
                [6, 7, 8]] 
Output: [[2, 5, 8],
        [1, 4, 7],
        [0, 3, 6]]
Input: mat[][] = [[1, 2],
                [3, 4]]
Output: [[2, 4],
        [1, 3]]
Constraints:
1 ≤ n ≤ 102
0 ≤ mat[i][j] ≤ 103  */



class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int N = mat.size();
        for(int i=0;i<N;i++){
            for(int j =i+1;j<N;j++){
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        
        for(int i = 0; i < N/2; i++){
            for(int j = 0;j < N; j++){
                int temp = mat[i][j];
                mat[i][j] = mat[N-i-1][j];
                mat[N-i-1][j] = temp;
            }
        }
        return;
    }
};
