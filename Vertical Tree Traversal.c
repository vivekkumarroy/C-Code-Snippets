/*  Given the root of a Binary Tree, find the vertical traversal of the tree starting from the leftmost level to the rightmost level.

Note: If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

Examples:

Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, N, 8, N, 9, N, 10, 11, N]
                    
Output: [[4], [2], [1, 5, 6, 11], [3, 8, 9], [7], [10]]
Explanation: The below image shows the horizontal distances used to print vertical traversal starting from the leftmost level to the rightmost level.
     
Input: root = [1, 2, 3, 4, 5, N, 6]
     
Output: [[4], [2], [1, 5], [3], [6]]
Explanation: From left to right the vertical order will be [[4], [2], [1, 5], [3], [6]]
Constraints:
1 ≤ number of nodes ≤ 105
1 ≤ node->data ≤ 105  */






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
    
    void find(Node * root ,int pos, int &l,int &r){
        
        if(!root) return ;
        l = min(l,pos);
        r = max(r,pos);
        
        find(root-> left,pos-1,l,r);
        find(root-> right,pos+1,l,r);
        return ;
    }
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        int l = 0,r = 0;
    find(root,0,l,r);
    vector<vector<int>>ans;
    vector<vector<int>>positive(r + 1);
    vector<vector<int>>negative((-1 *l) + 1);
    
    queue<Node *>q;
    queue<int>index;
    q.push(root);
    index.push(0);
    Node * temp;
    int idx;
    while(q.size()){
       temp = q.front();
              q.pop();
        idx = index.front();
              index.pop();
        if(idx >= 0) positive[idx].push_back(temp -> data);
        else negative[abs(idx)].push_back(temp -> data);
        if(temp -> left) {
            q.push(temp -> left);
            index.push(idx -1);
        }
        if(temp -> right) {
            q.push(temp -> right);
            index.push(idx + 1);
        }
    }
    
    for(int i = negative.size() - 1;i> 0;i--){
        vector<int>ans1;
        for(int j = 0 ; j < negative[i] .size() ; j++){
            ans1.push_back(negative[i][j]);
        }
        ans.push_back(ans1);
    }
    for(int i = 0; i < positive.size();i++){
        vector<int>ans2;
        for(int j = 0 ; j < positive[i] .size() ; j++){
            ans2.push_back(positive[i][j]);
        }
        ans.push_back(ans2);
    }
   
    
    return ans;
        
        
    }
};