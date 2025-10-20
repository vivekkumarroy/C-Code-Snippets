/*   Given a Binary Tree, find maximum and minimum elements in it.

Example:

Input: 
           
Output: 11 1
Explanation: The maximum and minimum element in this binary tree is 11 and 1 respectively.
Input: 
           6
        / \
       5   8
      /
     2
Output: 8 2
Explanation: The maximum and minimum element in this binary tree is 8 and 2 respectively.
Constraints:
1 <= number of nodes <= 105
1 <= data of a node <= 105   */





/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    int findMax(Node *root) {
        // code here
       if(root == NULL) return INT_MIN; 
       return max(max(findMax(root -> left) ,findMax(root -> right)) ,root->data);
    }

    int findMin(Node *root) {
        if(root == NULL) return INT_MAX;  
        // code here
        return min(min(findMin(root -> left) ,findMin(root -> right)) ,root->data);

    }
};