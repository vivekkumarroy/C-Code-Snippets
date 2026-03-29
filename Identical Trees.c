/*   Given two binary trees with their root nodes r1 and r2, return true if both of them are identical, otherwise return false.
Note: Two trees are identical when they have the same data and the arrangement of the data is also same.

Examples:

Input: r1 = [1, 2, 3, 4], r2 = [1, 2, 3, 4]

Output: true
Explanation: Trees are identical.
Input: r1 = [1, 2, 3, 4], r2 = [1, 2, 3, N, N, 4]
 
Output: false
Explanation: Trees are not identical.
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 109  */



/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        // code here
        
        if(r1 == nullptr && r2 == nullptr) return true;
        if((r1 == nullptr && r2!=nullptr)||(r2 == nullptr && r1!=nullptr)) return false;
        if(r1-> data != r2 -> data)return false;
        
        return isIdentical(r1 -> left ,r2 -> left) && isIdentical(r1 -> right ,r2 -> right); 
        
    }
};