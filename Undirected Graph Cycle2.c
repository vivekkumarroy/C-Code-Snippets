/*    Given an undirected graph with V vertices and E edges, represented as a 2D vector edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v, determine whether the graph contains a cycle or not.

Note: The graph can have multiple component.

Examples:

Input: V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
Output: true
Explanation: 
 
1 -> 2 -> 0 -> 1 is a cycle.
Input: V = 4, E = 3, edges[][] = [[0, 1], [1, 2], [2, 3]]
Output: false
Explanation: 
 
No cycle in the graph.
Constraints:
1 ≤ V, E ≤ 105
0 ≤ edges[i][0], edges[i][1] < V   */





class Solution {
public:
    
    bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;
      
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
            
                if (dfs(neighbor, node, adj, visited)) {
                    return true;
                }
            } else if (neighbor != parent) {
    
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]); 
        }
        
        vector<bool> visited(V, false);
        
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs(i, -1, adj, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};
