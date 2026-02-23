/*   You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.

 

Example 1:


Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
Output: 6
Explanation: The answer is not 11, because the island must be connected 4-directionally.
Example 2:

Input: grid = [[0,0,0,0,0,0,0,0]]
Output: 0
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 50
grid[i][j] is either 0 or 1.  */




class Solution {
private:
    int dfs(vector<vector<int>>& grid, int i, int j, int rows, int cols) {
        // Base case: out of bounds or already visited (0)
        if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] == 0) {
            return 0;
        }
        
        // Mark as visited by setting to 0
        grid[i][j] = 0;
        
        // Recurse in 4 directions + 1 for current cell
        return 1 + dfs(grid, i+1, j, rows, cols) +  // down
                     dfs(grid, i-1, j, rows, cols) +  // up
                     dfs(grid, i, j+1, rows, cols) +  // right
                     dfs(grid, i, j-1, rows, cols);   // left
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        
        int rows = grid.size();
        int cols = grid[0].size();
        int maxArea = 0;
        
        // Check every cell
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    int area = dfs(grid, i, j, rows, cols);
                    maxArea = max(maxArea, area);
                }
            }
        }
        
        return maxArea;
    }
};
