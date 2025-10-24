/*  Given a root of a Binary Tree, your task is to return its Inorder Traversal.

Note: An inorder traversal first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree).

Examples:

Input: root = [1, 2, 3, 4, 5]
            
Output: [4, 2, 5, 1, 3]
Explanation: The inorder traversal of the given binary tree is [4, 2, 5, 1, 3].
Input: root = [8, 1, 5, N, 7, 10, 6, N, 10, 6]
              
Output: [1, 7, 10, 8, 6, 10, 5, 6]
Explanation: The inorder traversal of the given binary tree is [1, 7, 10, 8, 6, 10, 5, 6].
Constraints:
1 ≤ number of nodes ≤ 3*104
0 ≤ node->data ≤ 105    */







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
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> ans;
        while(root){
            if(!root -> left){
                ans.push_back(root -> data);
                root = root -> right;
            }
            else{
                Node * curr = root -> left;
                while(curr -> right && curr -> right != root){
                    curr = curr -> right;
                }
                if(curr -> right == NULL){
                    curr -> right = root;
                    root = root -> left;
                }
                else{
                    ans.push_back(root -> data);
                    curr ->right = NULL;
                    root = root -> right;
                }
            }
        }
        return ans;
    }
};