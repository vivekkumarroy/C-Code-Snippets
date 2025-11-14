/*  Given a binary tree and an integer target, check whether there is a root-to-leaf path with its sum as target.

Examples :

Input: target = 2
   1 
 /   \
2     3
Output: false
Explanation: There is no root to leaf path with sum 2.
Input: target = 4
   1
 /   \
2     3
Output: true
Explanation: The sum of path from leaf node 3 to root 1 is 4.
Constraints:
1 ≤ number of nodes ≤ 104
1 ≤ target ≤ 106  */





/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
  int sum = 0;
    bool sumAll(Node * root ,int t,int sum){
        if( root == NULL) return false;
        sum += root -> data;
        if(root -> left == NULL && root -> right == NULL){
            // cout << sum << " ";
            if(sum == t) return true;
        }
        if(sumAll(root -> left,t,sum) ||
        sumAll(root -> right,t,sum)){
            return true;
        }
        return false;
    }
    bool hasPathSum(Node *root, int target) {
        // Your code here
        sum = 0;
        return sumAll(root,target,sum);
        
    }
};