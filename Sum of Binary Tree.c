/*   Given a binary tree, find the sum of values of all the nodes. 

Examples:

Input: root = [10, 20, 30, 40, 60, N, N]
           10
         /   \
        20    30
      /    \
    40     60
Output: 160
Explanation: The sum of all the nodes is 10 + 20 + 30 + 40 + 60.
Input: root = [1, 3, 2]
      1
    /   \
   3     2
Output: 6
Explanation: The sum of all the nodes is 1 + 2 + 3 = 6.
Input: root = [1, 2, N, 4, N]
           1
         /     
        2    
      /   
    4     
Output: 7
Explanation: The sum of all the nodes is 1 + 2 + 4 = 7.
Constraints:
1 <= number of nodes <= 104
-105 <= node->data <= 105  */





/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root == NULL) return 0;
    return (root -> data) + sumBT(root -> left)+ sumBT(root -> right);;
    }
};