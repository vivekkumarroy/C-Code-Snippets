/* Given the root of a binary tree, your task is to find the diameter of the binary tree.

The diameter (also called the width) of a binary tree is defined as the number of edges on the longest path between any two leaf nodes. Note that this path may or may not pass through the root of the tree.

Examples:

Input: root = [1, 2, 3]

Output: 2
Explanation: The longest path has 2 edges (node 2 -> node 1 -> node 3).

Input: root[] = [5, 8, 6, 3, 7, 9]

Output: 4
Explanation: The longest path has 4 edges (node 3 -> node 8 -> node 5 -> node 6 -> node 9).

Constraints:
1 ≤ number of nodes ≤ 103
0 ≤ node->data ≤ 105

  */








  /*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  int ans = 0;
  int height(Node *root){
      if(root == NULL) return 0;
      int l = height(root -> left);
      int r = height(root -> right);
      ans = max(ans,l+r+1);
      return max(l,r) +1;
      
  }
    int diameter(Node* root) {
        // code here
        ans = 0;
        height(root);
        return ans - 1;
        
    }
};