/*   Given the root of a binary Tree. Your task is to return the right view of the binary tree. The right view of a Binary Tree is the set of nodes visible when the tree is viewed from the right side.

Examples :

Input: root = [1, 2, 3, N, N, 4, 5]
     2_2
Output: [1, 3, 5]
Input: root = [1, 2, 3, 4, N, N, N, N, 5]
     Right-view-in-binary-tree-1
Output: [1, 3, 4, 5]
Constraints:
1 ≤ number of nodes ≤ 105
0 ≤ node->data ≤ 105  */



/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
        vector<int>ans;
        queue<Node *>q;
        q.push(root);
        Node * temp = nullptr;
        while(q.size() > 0){
            int n = q.size();
        for(int i = 0; i<n; i++){
            temp = q.front();
            q.pop();
            if(i == n-1){
             ans.push_back(temp ->  data);
            }
            if(temp -> left)  q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
        
        }
        return ans;
    }
};