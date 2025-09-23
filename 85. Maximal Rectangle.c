/*   Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

 

Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.
Example 2:

Input: matrix = [["0"]]
Output: 0
Example 3:

Input: matrix = [["1"]]
Output: 1
 

Constraints:

rows == matrix.length
cols == matrix[i].length
1 <= row, cols <= 200
matrix[i][j] is '0' or '1'.   */






class Solution {
public:

    int maxRectangleArea(vector<int>&arr){
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
            ans = max(ans,(p2[i] - p1[i] - 1 )*arr[i]);
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
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
            ans = max(ans,maxRectangleArea(arr[i]));
        }
        return ans;
    }
};