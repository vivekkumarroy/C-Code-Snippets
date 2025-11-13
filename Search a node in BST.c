/*  Given the root of a Binary Search Tree and a node value key, find if the node with value key is present in the BST or not.

Examples:

Input: root = [6, 2, 8, N, N, 7, 9], key = 8
    
Output: true
Explanation: 8 is present in the BST as right child of root.
Input: root = [16, 12, 18, 10, N, 17, 19], key = 14
    
Output: false
Explanation: 14 is not present in the BST
Constraints:
1 ≤ number of nodes ≤ 3*104
1 ≤ node->data, key ≤ 109  */



/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
         if(root == NULL){
            return false;
        }
        if(root-> data == key){
            return true;
        }
        else if (root->data > key){
            return search(root -> left, key);
        }
        else if( root->data < key){
            return search(root -> right, key);
        }
        else return false;
        
    }
};