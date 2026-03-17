
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