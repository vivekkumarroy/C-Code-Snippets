/*  Given a Binary Tree of size n, You have to count leaves in it. For example, there are two leaves in the following tree


 

Examples:

Input:
Given Tree is  

Output: 3
Explanation: Three leaves are 3, 5 and 1.
Input:
Given Tree is

Output: 4
Explanation: Four leaves are 20, 40, 65 and 80.
Input:
Given Tree is  

Output: 3
Explanation: Three leaves are 20, 27 and 40.
 Constraints:
1<= number of nodes <= 105
1<= node->data <= 105

  */







  /* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void countLeaf(Node*root ,int &count){
        if(root == NULL){
            return;
        }
        if(root -> left == NULL && root -> right == NULL){
            count++;
        }
        countLeaf(root -> left,count);
        countLeaf(root -> right,count);
    }
    int countLeaves(Node* root) {
        // write code here
        int count = 0;
        countLeaf(root,count);
    return count;
    }
};