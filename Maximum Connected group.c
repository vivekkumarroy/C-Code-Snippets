/*  You are given a square binary grid. A grid is considered binary if every value in the grid is either 1 or 0. You can change at most one cell in the grid from 0 to 1. You need to find the largest group of connected  1's. Two cells are said to be connected if both are adjacent(top, bottom, left, right) to each other and both have the same value.

Examples :

Input: grid[][] =  

Output: 4
Explanation: By changing cell (2,1), we can obtain a connected group of 4 1s
 
Input: grid[][] = 

Output: 7
Explanation: By changing cell (3,2), we can obtain a connected group of 7 1s 

Note that can change (1, 2) or (2, 2) also to get 7 1s.
Constraints:
1 <= size of the grid<= 500
0 <= grid[i][j] <= 1

   */



   class DSU {
public:
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);
        for(int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int u, int v) {
        u = find(u);
        v = find(v);
        if(u == v) return;

        if(size[u] < size[v]) swap(u, v);
        parent[v] = u;
        size[u] += size[v];
    }
};

class Solution {
  public:
    int maxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        DSU dsu(n * n);

        vector<int> dx = {0, 0, -1, 1};
        vector<int> dy = {-1, 1, 0, 0};

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    for(int d = 0; d < 4; d++) {
                        int ni = i + dx[d];
                        int nj = j + dy[d];

                        if(ni >= 0 && nj >= 0 && ni < n && nj < n && grid[ni][nj] == 1) {
                            int node1 = i * n + j;
                            int node2 = ni * n + nj;
                            dsu.unite(node1, node2);
                        }
                    }
                }
            }
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) {
                    set<int> comps;

                    for(int d = 0; d < 4; d++) {
                        int ni = i + dx[d];
                        int nj = j + dy[d];

                        if(ni >= 0 && nj >= 0 && ni < n && nj < n && grid[ni][nj] == 1) {
                            comps.insert(dsu.find(ni * n + nj));
                        }
                    }

                    int sizeTotal = 1;
                    for(auto comp : comps) {
                        sizeTotal += dsu.size[comp];
                    }

                    ans = max(ans, sizeTotal);
                }
            }
        }

        for(int i = 0; i < n*n; i++) {
            ans = max(ans, dsu.size[dsu.find(i)]);
        }

        return ans;
    }
};