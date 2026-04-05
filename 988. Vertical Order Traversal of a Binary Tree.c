/*  Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.

Return the vertical order traversal of the binary tree.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[9],[3,15],[20],[7]]
Explanation:
Column -1: Only node 9 is in this column.
Column 0: Nodes 3 and 15 are in this column in that order from top to bottom.
Column 1: Only node 20 is in this column.
Column 2: Only node 7 is in this column.
Example 2:


Input: root = [1,2,3,4,5,6,7]
Output: [[4],[2],[1,5,6],[3],[7]]
Explanation:
Column -2: Only node 4 is in this column.
Column -1: Only node 2 is in this column.
Column 0: Nodes 1, 5, and 6 are in this column.
          1 is at the top, so it comes first.
          5 and 6 are at the same position (2, 0), so we order them by their value, 5 before 6.
Column 1: Only node 3 is in this column.
Column 2: Only node 7 is in this column.
Example 3:


Input: root = [1,2,3,4,6,5,7]
Output: [[4],[2],[1,5,6],[3],[7]]
Explanation:
This case is the exact same as example 2, but with nodes 5 and 6 swapped.
Note that the solution remains the same since 5 and 6 are in the same location and should be ordered by their values.
 

Constraints:

The number of nodes in the tree is in the range [1, 1000].
0 <= Node.val <= 1000   */





class Solution {
public:

    void find(TreeNode * root ,int pos, int &l,int &r){
        if(!root) return ;
        l = min(l,pos);
        r = max(r,pos);
        
        find(root-> left,pos-1,l,r);
        find(root-> right,pos+1,l,r);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        int l = 0,r = 0;
        find(root,0,l,r);

        vector<vector<int>> ans;

        // ✅ store {row, value}
        vector<vector<pair<int,int>>> positive(r + 1);
        vector<vector<pair<int,int>>> negative((-1 * l) + 1);
        
        queue<TreeNode *> q;
        queue<pair<int,int>> index; // {col, row}

        q.push(root);
        index.push({0,0});

        while(q.size()){
            TreeNode* temp = q.front(); q.pop();
            int col = index.front().first;
            int row = index.front().second;
            index.pop();

            if(col >= 0) positive[col].push_back({row, temp->val});
            else negative[abs(col)].push_back({row, temp->val});

            if(temp->left){
                q.push(temp->left);
                index.push({col - 1, row + 1});
            }
            if(temp->right){
                q.push(temp->right);
                index.push({col + 1, row + 1});
            }
        }

        // ✅ process negative (right to left)
        for(int i = negative.size() - 1; i > 0; i--){
            auto &vec = negative[i];
            sort(vec.begin(), vec.end()); // sort by row, then value
            
            vector<int> temp;
            for(auto &p : vec) temp.push_back(p.second);
            
            ans.push_back(temp);
        }

        // ✅ process positive (left to right)
        for(int i = 0; i < positive.size(); i++){
            auto &vec = positive[i];
            sort(vec.begin(), vec.end()); // ⭐ important
            
            vector<int> temp;
            for(auto &p : vec) temp.push_back(p.second);
            
            ans.push_back(temp);
        }

        return ans;
    }
};


