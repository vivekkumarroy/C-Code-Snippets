/*  Given the root of a Binary search tree(BST), where exactly two nodes were swapped by mistake. Your task is to fix (or correct) the BST by swapping them back. Do not change the structure of the tree.
Note: It is guaranteed that the given input will form BST, except for 2 nodes that will be wrong. All changes must be reflected in the original Binary search tree(BST).
 
Examples :
Input: root = [10, 5, 8, 2, 20]
     
Output: 1
       

Explanation: The nodes 20 and 8 were swapped. 
Input: root = [5, 10, 20, 2, 8]
     
Output: 1 
     
Explanation: The nodes 10 and 5 were swapped.
Constraints:
1 ≤ Number of nodes ≤ 103  */




/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
 
  Node *f = NULL,*s = NULL,*p = NULL;
  
  void inorder(Node *&root){
       if(root == nullptr) return ;
        inorder(root -> left);
        if( p!= NULL && p -> data > root -> data){
            if(f == NULL) {
                f = p;
                s = root;
            }
            else{
                s = root;
            }
        }
        p = root;
        inorder(root -> right);
  }
    void correctBST(Node* root) {
        // add code here.
       f = NULL;
       s = NULL;
       p = NULL;
       inorder(root);
            int temp = f->data;
            f->data = s->data;
            s->data = temp;
 
    }
};