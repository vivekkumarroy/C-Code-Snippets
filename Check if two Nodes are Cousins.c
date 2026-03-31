/*   Given a binary tree (having distinct node values)root and two node values. Check whether or not the two nodes with values a and b are cousins.
Note: Two nodes of a binary tree are cousins if they have the same depth with different parents.

Examples:

Input:
      1
    /   \
   2     3
a = 2, b = 3
Output: false
Explanation: Here, nodes 2 and 3 are at the same level but have same parent nodes.
Input:
       1
     /   \ 
    2     3
   /       \
  5         4 
a = 5, b = 4
Output: True
Explanation: Here, nodes 5 and 4 are at the same level and have different parent nodes. Hence, they both are cousins. 
Input:
          10
        /    \
      5       15
     / \     /  \
    3   7   12   20
a = 7, b = 12
Output: True
Explanation: Here, nodes 7 and 12 are at the same level and have different parent nodes. Hence, they both are cousins. 
Constraints:
1 <= number of nodes <= 105
1 <= node->data <= 105
1 <= a, b <= 105  */






/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
     bool find(Node * root , int x ,int y){
         if(root == NULL) return false; 
         
         if(root -> left && root -> right){
             if((root -> left -> data == x) && (root -> right -> data == y)) return true; 
             if((root -> left -> data == y) && (root -> right -> data == x)) return true; 
         }
         
        
        
         return  find(root -> left,x,y) ||  find(root -> right,x,y);
     }
    // Function to check if two nodes are cousins in a tree
    bool isCousins(Node* root, int x, int y) {
        // write code here
        if(x == y) return false;
        
        queue<Node*>q;
        q.push(root);
        Node *temp;
        int l1 =-1,l2 = -1;
        int level = 0;
        while(q.size()){
            int n = q.size();
            while(n--){
                temp = q.front();
                q.pop();
                if(temp -> data == x)
                   l1 = level; 
                if(temp -> data == y)
                   l2 = level; 
                if(temp -> left != NULL)
                   q.push(temp -> left);
                   
                if(temp -> right != NULL)
                   q.push(temp -> right);
                
            }
            level++;
            if(l1 != l2) return false;
            if(l1 != -1 && l2 != -1) break;
            
        }
          if(l1 == -1 || l2 == -1) return false;

        
        return !find(root,x,y);
        
        
    }
};