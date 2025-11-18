/*  Given the root of a binary tree. Check whether it is a BST or not.

A BST is defined as follows:

The left subtree of a node contains only nodes with data less than the node's data.
The right subtree of a node contains only nodes with data greater than the node's data.
Both the left and right subtrees must also be binary search trees.
Note: We are considering that BSTs can not contain duplicate Nodes.

Examples:

Input: root = [2, 1, 3, N, N, N, 5]


Output: true 
Explanation: The left subtree of every node contains smaller data and right subtree of every node contains greater data. Hence, the tree is a BST.
Input: root = [2, N, 7, N, 6, N, 9] 



Output: false 
Explanation: Since the node to the right of node with data 7 has lesser value 6, hence it is not a valid BST.
Input: root = [10, 5, 20, N, N, 9, 25]


Output: false
Explanation: The node with data 9 present in the right subtree has lesser key value than root node 10.
  */






  /*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void vecArr(Node * &root,vector<int>&ans){
      if(root == nullptr) return;
        vecArr(root -> left,ans);
        ans.push_back(root -> data);
        vecArr(root -> right,ans);
  }
    bool isBST(Node* root) {
        // code here
        vector<int>ans;
        vecArr(root,ans);
        int p = 0;
        for(auto e : ans){
            if(e < p) return false;
            p = e;
        }
        return true;
    }
};