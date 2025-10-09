/*  Given a Binary tree. Find the preorder traversal of the tree without using recursion.

Follow up: Try solving this with O(1) auxiliary space.


Examples:

Input: root = [1, 2, 3, 4, 5]

Output: [1, 2, 4, 5, 3]
Explanation:
Preorder traversal (Root->Left->Right) of
the tree is 1 2 4 5 3.
Input: root = [8, 1, 5, N, 7, 10, 6, N, 10, 6]

Output: [8, 1, 7, 10, 5, 10, 6, 6] 
Explanation:
Preorder traversal (Root->Left->Right) 
of the tree is 8 1 7 10 5 10 6 6.
Constraints:
1 ≤ Number of nodes ≤ 105
0 ≤ node->data ≤ 105  */





/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        Node * curr = root;
        stack<Node *>st;
        vector<int>ans;
        while(curr != NULL || st.size() > 0){
            if(curr != NULL){
            ans.push_back(curr -> data);
                st.push(curr);
                curr = curr -> left;
            }
            else{
                curr = st.top();
                st.pop();
                curr = curr -> right;
            }  
        }
        return ans;
    }
};