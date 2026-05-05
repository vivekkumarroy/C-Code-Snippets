/*  Given an undirected graph with V vertices numbered from 0 to V-1 and E edges, represented by 2d array edges[][], where edges[i]=[u,v] represents the edge between the vertices u and v. Determine whether a specific edge between two vertices (c, d) is a bridge.

Note:

An edge is called a bridge if removing it increases the number of connected components of the graph.
if there’s only one path between c and d (which is the edge itself), then that edge is a bridge.
Examples :

Input: V = 4, edges[][] = [[0, 1], [1, 2], [2, 3]], c = 1, d = 2

Output: true
Explanation: From the graph, we can clearly see that blocking the edge 1-2 will result in disconnection of the graph.
Hence, it is a Bridge.
Input: V = 5, edges[][] = [[0, 1], [0, 3], [1, 2], [2, 0], [3, 4]], c = 0, d = 2
 
Output: false
Explanation:
 
Blocking the edge between nodes 0 and 2 won't affect the connectivity of the graph.
So, it's not a Bridge Edge. All the Bridge Edges in the graph are marked with a green line in the above image.
Constraints:
1 ≤ V, E ≤ 105
0 ≤ c, d ≤ V-1  */






class Solution {
  public:
  
    void dfs(int node, int parent, vector<int>& vis, vector<int>& tin, vector<int>& low,
             vector<vector<int>>& adj, int& timer, bool &isBridgeEdge, int c, int d) {
        
        vis[node] = 1;
        tin[node] = low[node] = timer++;
        
        for (auto it : adj[node]) {
            
            if (it == parent) continue;
            
            if (!vis[it]) {
                dfs(it, node, vis, tin, low, adj, timer, isBridgeEdge, c, d);
                
                low[node] = min(low[node], low[it]);
                
                //Bridge condition
                if (low[it] > tin[node]) {
                    if ((node == c && it == d) || (node == d && it == c)) {
                        isBridgeEdge = true;
                    }
                }
            }
            else {
                low[node] = min(low[node], tin[it]);
            }
        }
    }
  
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> vis(V, 0), tin(V), low(V);
        int timer = 0;
        bool isBridgeEdge = false;
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, -1, vis, tin, low, adj, timer, isBridgeEdge, c, d);
            }
        }
        
        return isBridgeEdge;
    }
};