/* Given the root of a Binary Search Tree (with all values unique) and two nodes n1 and n2 (n1 != n2). You may assume that both nodes exist in the tree. Find the Lowest Common Ancestor (LCA) of the given two nodes in the BST.

Note: LCA between two nodes n1 and n2 is defined as the deepest node that has both n1 and n2 as descendants (where we allow a node to be a descendant of itself).

Examples:

Input: root = [5, 4, 6, 3, N, N, 7, N, N, N, 8], n1->data = 7, n2->data = 8
      
Output: 7
Explanation: 7 is the lowest node that has both 7 and 8 as descendants.
Input: root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], n1->data = 8, n2->data = 14
           
Output: 8
Explanation: 8 is the lowest node that has both 8 and 14 as descendants.
Input: root = [2, 1, 3], n1->data = 1, n2->data = 3
        
Output: 2
Explanation: 2 is the lowest node that has both 1 and 3 as descendants.
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105
1 ≤ n1->data, n2->data ≤ 105

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
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        int m1 = n1 -> data;
        int m2 = n2 -> data;
        while(root != NULL){
            if(m1 < root -> data && m2 < root -> data){
                root = root -> left;
            }
            else if(m1 > root -> data && m2 > root -> data){
                root = root -> right;
            }
            else{
                return root;
            }
        }
    }
};