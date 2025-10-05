/* Given a binary tree, find its preorder traversal.

Examples:

Input:
        1      
      /          
    4    
  /    \   
4       2
Output: [1, 4, 4, 2]
Input:
       6
     /   \
    3     2
     \   / 
      1 2
Output: [6, 3, 1, 2, 2] 
Input:
         8
       / \
      3   10
     / \    \
    1   6   14
       / \   /
      4   7 13
Output: [8, 3, 1, 6, 4, 7, 10, 14, 13]
Constraints:
1 ≤ number of nodes ≤ 105
0 ≤ node->data ≤ 106   */




/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  void pre(Node * node,vector<int>&ans){
      if(node == NULL)
        return;
        ans.push_back(node -> data);
        pre(node -> left,ans);
        pre(node -> right,ans);
  }
    vector<int> preorder(Node* root) {
        // code here
        vector <int> ans;
        pre(root,ans);
        return ans;
    }
};