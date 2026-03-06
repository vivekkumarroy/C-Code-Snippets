/*  Given a square chessboard of size (n x n), the initial position and target postion of Knight are given. Find out the minimum steps a Knight will take to reach the target position.

Note: The initial and the target position coordinates of Knight have been given according to 1-base indexing.

Examples:

Input: n = 3, knightPos[] = [3, 3], targetPos[]= [1, 2]
Output: 1
Explanation:
Knight takes 1 step to reach from 
(3, 3) to (1 ,2).
Input: n = 6, knightPos[] = [4, 5],targetPos[] = [1, 1]
Output: 3
Explanation:

Knight takes 3 step to reach from 
(4, 5) to (1, 1):
(4, 5) -> (5, 3) -> (3, 2) -> (1, 1).
Constraints:
1 <= n<= 1000
1 <= knightpos ≤ [x, y], targertpos[x, y] ≤  n   */




class Solution {
public:
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        
        int dx[8] = {-2,-2,-1,-1,1,1,2,2};
        int dy[8] = {-1,1,-2,2,-2,2,-1,1};
        
        vector<vector<bool>> visited(n+1, vector<bool>(n+1,false));
        vector<vector<int>> dist(n+1, vector<int>(n+1,0));
        queue<pair<int,int>> q;
        int sx = knightPos[0];
        int sy = knightPos[1];
        int tx = targetPos[0];
        int ty = targetPos[1];
        q.push({sx,sy});
        visited[sx][sy] = true;
        
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            
            int x = p.first;
            int y = p.second;
            
            if(x == tx && y == ty)
                return dist[x][y];
            
            for(int i=0;i<8;i++){
                
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx>=1 && ny>=1 && nx<=n && ny<=n && visited[nx][ny]== false){
                    
                    visited[nx][ny] = true;
                    dist[nx][ny] = dist[x][y] + 1;
                    
                    q.push({nx,ny});
                }
            }
        }
        
        return -1;
    }
};