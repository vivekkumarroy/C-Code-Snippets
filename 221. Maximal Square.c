/*  Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

 

Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 4
Example 2:


Input: matrix = [["0","1"],["1","0"]]
Output: 1
Example 3:

Input: matrix = [["0"]]
Output: 0
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 300
matrix[i][j] is '0' or '1'.
 

Seen this question in a real interview before?
1/5
Yes
No   */







class Solution {
public:

int maxSqureArea(vector<int>&arr){
        stack<int>st1;
        stack<int>st2;
        vector<int>p1(arr.size(),-1);
        vector<int>p2(arr.size(),arr.size());


        for(int i = 0; i < arr.size();i++){
            while(st1.size() > 0 && arr[st1.top()] >= arr[i]){
                st1.pop();
            }
            if(st1.size() > 0){
                p1[i] = st1.top(); 
            }
            st1.push(i);
        }
        for(int i = arr.size()-1; i >=0 ;i--){
            while(st2.size() > 0 && arr[st2.top()] >= arr[i]){
                st2.pop();
            }
            if(st2.size() > 0){
                p2[i] = st2.top(); 
            }
            st2.push(i);
        }
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            ans = max(ans,min((p2[i] - p1[i] - 1 ),arr[i]) * min((p2[i] - p1[i] - 1 ),arr[i]));
        }
        return ans;
    }




    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> arr(matrix.size(), vector<int>(matrix[0].size(), 0));
        for(int j = 0; j < int(matrix[0].size());j++){
            int count = 0;
            for(int i = 0; i < int(matrix.size());i++){
                if(matrix[i][j] == '1'){
                    count++;
                }
                else{
                    count = 0;
                }
                arr[i][j] = count;
            }
        }

        int ans = 0;
        for(int i = 0; i < int(matrix.size());i++){
            ans = max(ans,maxSqureArea(arr[i]));
        }
        return ans;
    }
};