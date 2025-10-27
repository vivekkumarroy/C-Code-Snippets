/*  Given a Two Binary Trees, write a function that returns true if one is mirror of other, else returns false.
MirrorTree1            

Examples:

Input:
a:      1     b:      1
      /   \         /   \
     2     3       3     2
Output: true
Explanation: Given pairs of binary tree are mirror of each other.

Input:
a:      10      b:    10
       /  \          /  \
      20  30        20  30
     /  \          /  \
    40   60       40  60
Output: false
Explanation: Given pairs of binary tree are not mirror of each other.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(h).

Constraints:
1 <= number of nodes<= 105
0 <= node -> data<= 105 

  */




  /* Node structure
struct Node
{
    int data;
    Node* left, *right;
}; */

/* Given two trees, should return true if they are
   mirror of each other. */
 bool isMirror(Node* a, Node* b){
       if(a==nullptr && b==nullptr) return true;
       if(a==nullptr || b==nullptr) return false;
       
       return (a->data == b->data && isMirror(a->left,b->right)
       && isMirror(a->right,b->left));
   }
class Solution
{
    public:
    int areMirror(Node* a, Node* b) {
    // Your code here
        if(isMirror(a,b)) return 1;
        else return 0;
    }
};

