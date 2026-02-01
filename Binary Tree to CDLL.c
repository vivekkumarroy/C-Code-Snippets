/* Given a root binary tree (BT), the task is to convert this to a Circular Doubly Linked List (CDLL) in-place. The left and right pointers in nodes will be used as previous and next pointers respectively in CDLL. The order of nodes in CDLL must be the same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the CDLL.

Examples:

Input: root = [1, 3, 2]

Output: 3 <-> 1 <-> 2 
Explanation: Inorder traversal of the tree is [3, 1, 2], which directly forms the Circular Doubly Linked List.
Input: root = [10, 20, 30, 40, 60]

Output: 40 <-> 20 <-> 60 <-> 10 <-> 30 
Explanation: Inorder traversal of the tree is [10, 20, 30, 40, 60], which directly forms the Circular Doubly Linked List.
Constraints:
1 <= number of nodes <= 103
0 <= data of a node <= 104  */




/*class Node {
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
  
  void inorder(Node* node, Node*& prev, Node*& head){
    if(!node) return;
    
    inorder(node->left, prev, head);
    
    node->left = prev;
    if(prev) prev->right = node;
    else head = node;
    
    prev = node;
    
    inorder(node->right, prev, head);
}

    Node *bTreeToCList(Node *root) {
        // code here.
    if(!root) return NULL;
    
    Node* prev = NULL;
    Node* head = NULL;
    
    inorder(root, prev, head);
    
    if(head){
        head->left = prev;
        prev->right = head;
    }
    return head;
    }
};