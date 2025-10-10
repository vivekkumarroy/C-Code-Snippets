/* Given the root of a Binary Tree, your task is to return its Level Order Traversal.

Note: A level order traversal is a breadth-first search (BFS) of the tree. It visits nodes level by level, starting from the root, and processes all nodes from left to right within each level before moving to the next.

Examples:

Input: root = [1, 2, 3]

Output: [[1], [2, 3]]
Explanation: We start with the root node 1, so the first level of the traversal is [1]. Then we move to its children 2 and 3, which form the next level, giving the final output [[1], [2, 3]].
Input: root = [10, 20, 30, 40, 50]

Output: [[10], [20, 30], [40, 50]]
Explanation: We begin with the root node 10, which forms the first level as [10]. Its children 20 and 30 make up the second level, and their children 40 and 50 form the third level, resulting in [[10], [20, 30], [40, 50]].
Constraints:
1 ≤ number of nodes ≤ 3*104
0 ≤ node->data ≤ 109  */





/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        queue<Node *>q;
        vector<vector<int>>ans1;
        q.push(root);
        Node * temp = nullptr;
        while(q.size() > 0){
            int n = q.size();
            vector<int>ans;
        for(int i = 0; i<n; i++){
            temp = q.front();
            q.pop();
            ans.push_back(temp -> data);
            if(temp -> left)  q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
        ans1.push_back(ans);
        }
        return ans1;
    }
};