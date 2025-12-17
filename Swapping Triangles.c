/*  Given an integer N and a matrix A of dimensions NxN.Swap the values of the triangle above the primary diagonal with the values of the triangle below the primary diagonal.

Example 1:

Input:
N=3
A=[[1,2,3],[4,5,6],[7,8,9]]
Output:
1 4 7
2 5 8
3 6 9
Explanation:
Swapping the upper triangle with the
 lower triangle gives this result.
Example 2:

Input:
N=4
A=[[2,7,3,1],[10,1,5,1],[10,4,7,6],[6,9,1,8]]
Output:
2 10 10 6 
7 1 4 9 
3 5 7 1 
1 1 6 8
Explanation:
Swapping upper triangle with the
lower triangle leads to this result.

Your Task:
You don't need to read input or print anything. Your task is to complete the function swapTriangle() which takes the integer N and matrix A as input parameters and returns a matrix with the upper and lower triangles swapped.


Expected Time Complexity:O(N2)
Expected Auxillary Space:O(1)
 

Constraints:
1<=N,A[i][j]<=1000, for 0<=i    */






// User function Template for C++

class Solution {
  public:
    vector<vector<int>> swapTriangle(int N, vector<vector<int>> A) {
        // code here
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                int temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
        return A;
    }
};