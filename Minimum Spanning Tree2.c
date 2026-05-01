/* Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is provided as a list of edges, where each edge is represented as [u, v, w], indicating an edge between vertex u and vertex v with edge weight w.

Input: V = 3, E = 3, Edges = [[0, 1, 5], [1, 2, 3], [0, 2, 1]]
 
Output: 4
Explanation:

The Spanning Tree resulting in a weight
of 4 is shown above.
Input: V = 2, E = 1, Edges = [[0 1 5]]

 

Output: 5 
Explanation: Only one Spanning Tree is possible which has a weight of 5.
Constraints:
2 ≤ V ≤ 1000
V-1 ≤ E ≤ (V*(V-1))/2
1 ≤ w ≤ 1000
The graph is connected and doesn't contain self-loops & multiple edges.  */




class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        
         priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq; // store distance,neighbourt;
        //min heap low distance ko upr rkhega
        vector<vector<pair<int,int> >>adj(V);
    
            for(auto it : edges ){
                int u = it[0];
                int v = it[1];
                int wt = it[2];
                adj[u].push_back({wt,v});
                adj[v].push_back({wt,u});
            }
        vector<bool>mstset(V,false);
        pq.push({0,0});
        int mstcost = 0;
        while(!pq.empty())
        {
            auto it = pq.top();
            int wt = it.first;
            int u = it.second;
            pq.pop();
            if(!mstset[u])
            {
                mstset[u] = true;
                mstcost += wt;
                //access neigbour of u 
                for(auto v : adj[u] )
                {
                    int x = v.second;
                    int w = v.first;
                    pq.push({w,x});
                }
            }
        }
        return mstcost;
        
        
        
        
    }
};