/*  Given the root of a binary tree with all unique values and two nodes value, n1 and n2. Your task is to find the lowest common ancestor of the given two nodes. Both node values are always present in the Binary Tree.

Note: LCA is the first common ancestor of both the nodes n1 and n2 from bottom of tree.

Examples:

Input: root = [1, 2, 3, 4, 5, 6, 7], n1 = 4, n2 = 5    

Output: 2
Explanation: LCA of 4 and 5 is 2.

Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, N, N, 8], n1 = 7, n2 = 8

Output: 3
Explanation: LCA of 7 and 8 is 3.
 
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105  */



/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        //  code here
        // while(root != NULL){
        //     if(n1 < root -> data && n2 < root -> data){
        //         root = root -> left;
        //     }
        //     else if(n1 > root -> data && n2 > root -> data){
        //         root = root -> right;
        //     }
        //     else{
        //         return root;
        //     }
        // }
        if(root == NULL) return NULL;
        if(root ->data == n1 || root -> data == n2) return root;
        Node *x = lca(root-> left,n1,n2);
        Node *y = lca(root-> right,n1,n2);
        if(x && y) return root;
        return (x != NULL) ? x :y;

    }
};