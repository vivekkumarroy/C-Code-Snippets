/*  Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
 

Constraints:

1 <= heights.length <= 105
0 <= heights[i] <= 104   */







class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st1;
        stack<int>st2;
        vector<int>p1(heights.size(),-1);
        vector<int>p2(heights.size(),heights.size());
        for(int i = 0; i< heights.size();i++){
            while(st1.size() > 0 && heights[i] <= heights[st1.top()]){
                st1.pop();
            }
            
            if(st1.size() > 0){
                p1[i] = st1.top();
            }
            st1.push(i);
        }
        for(int i = heights.size()-1; i>=0;i--){
            while(st2.size() > 0 && heights[i] <= heights[st2.top()]){
                st2.pop();
            }
            
            if(st2.size() > 0){
                p2[i] = st2.top();
            }
            st2.push(i);
        }
        
        int ans = 0;
        for(int i = 0;i<heights.size();i++){
            ans = max(ans,(p2[i] - p1[i] - 1)*heights[i]);
        }
        
        return ans;
    }
};