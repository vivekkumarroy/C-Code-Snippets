/*  Given an undirected graph with v vertices(numbered from 1 to v) and e edges. Find the number of good components in the graph.
A component of the graph is good if and only if the component is fully connected.
Note: A fully connected component is a subgraph of a given graph such that there's an edge between every pair of vertices in the component, the given graph can be a disconnected graph. 

Examples

Input: e=3, v=3, edges[][] = [[1, 2], [1, 3], [3, 2]]

Output: 1
Explanation: 
We can see that there is only one component in the graph and in this component there is a edge between any two vertces.
Input:e=5, v=7, edges[][] = [[1, 2] ,[7, 2], [3, 5], [3, 4], [4, 5]]

Output: 2
Explanation: 
We can see that there are 3 components in the graph. For 1-2-7 there is no edge between 1 to 7, so it is not a fully connected component. Rest 2 are individually fully connected component.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findNumberOfGoodComponent(), which takes an integer e and v and edges[][] as input parameters and returns an integer denoting the number of good components.

Expected Time Complexity: O(v+e)
Expected Auxiliary Space: O(depth of the graph)

Constraints:
1 <= edges[i][0], edges[i][1] <= v
1 ≤ v, e ≤ 104
All edges are unique  */




class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> visited;
    
    void dfs(int node, int& comp_size, int& comp_edges) {
        visited[node] = true;
        comp_size++;
        comp_edges += adj[node].size();
        for (int nei : adj[node]) {
            if (!visited[nei]) {
                dfs(nei, comp_size, comp_edges);
            }
        }
    }
    
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        adj.resize(v + 1);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        visited.assign(v + 1, false);
        
        int good = 0;
        for (int i = 1; i <= v; ++i) {
            if (!visited[i]) {
                int comp_size = 0, comp_edges = 0;
                dfs(i, comp_size, comp_edges);
                comp_edges /= 2; 
                if (comp_edges == (long long)comp_size * (comp_size - 1) / 2) {
                    good++;
                }
            }
        }
        return good;
    }
};
