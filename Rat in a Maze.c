/*   Consider a rat placed at position (0, 0) in an n x n square matrix maze[][]. The rat's goal is to reach the destination at position (n-1, n-1). The rat can move in four possible directions: 'U'(up), 'D'(down), 'L' (left), 'R' (right).

The matrix contains only two possible values:

0: A blocked cell through which the rat cannot travel.
1: A free cell that the rat can pass through.
Your task is to find all possible paths the rat can take to reach the destination, starting from (0, 0) and ending at (n-1, n-1), under the condition that the rat cannot revisit any cell along the same path. Furthermore, the rat can only move to adjacent cells that are within the bounds of the matrix and not blocked.
If no path exists, return an empty list.

Note: Return the final result vector in lexicographically smallest order.

Examples:

Input: maze[][] = [[1, 0, 0, 0], [1, 1, 0, 1], [1, 1, 0, 0], [0, 1, 1, 1]]
Output: ["DDRDRR", "DRDDRR"]
Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.
Input: maze[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell (1, 1) is blocked.
Input: maze[][] = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
Output: ["DDRR", "RRDD"]
Explanation: The rat has two possible paths to reach the destination: DDRR and RRDD.
Constraints:
2 ≤ n ≤ 5
0 ≤ maze[i][j] ≤ 1  */




class Solution {
  public:
  
  void paths(int cr ,int cc,vector<vector<int>>&maze,vector<string> &ans,string &s,int n,int dr,int dc){
      
      if(cr < 0 || cc < 0 || cr >= n || cc >= n || maze[cr][cc] == 0 ) return;
      else if(cr == dr && cc == dc) {
          ans.push_back(s);
          return;
      }
      
      maze[cr][cc] = 0;
      
      s += 'D';
      paths(cr+1,cc,maze,ans,s,n,dr,dc);
      s.pop_back();
      s += 'U';
      paths(cr-1,cc,maze,ans,s,n,dr,dc);
      s.pop_back();
       s += 'R';
      paths(cr,cc+1,maze,ans,s,n,dr,dc);
      s.pop_back();
       s += 'L';
      paths(cr,cc-1,maze,ans,s,n,dr,dc);
      s.pop_back();
      
      maze[cr][cc] = 1;
      return;
  }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        int n = maze.size();
        string s = "";
        paths(0,0,maze,ans,s,n,n-1,n-1);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};