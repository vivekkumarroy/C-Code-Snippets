/*  Given an array arr[] of integers, for each element in the array, find the nearest smaller element on its left. If there is no such smaller element, return -1 for that position.

Input: arr[] = [1, 6, 2]
Output: [-1, 1, 1]
Explaination: 
There is no number to the left of 1, so we return -1. 
After that, the number is 6, and the nearest smaller number on its left is 1. 
Next, the number is 2, and the nearest smaller number on the left is also 1.
Input: arr[] = [1, 5, 0, 3, 4, 5]
Output: [-1, 1, -1, 0, 3, 4]
Explaination: 
There is no number to the left of 1,  so we return -1. 
After that, the number is 5,  and the nearest smaller number on its left is 1. 
 Next, the number is 0, and there is no smaller number on the left, so we return -1.
Then comes 3, and the nearest smaller number on its left is 0.
After that, the number is 4, and the nearest smaller number on the left is 3. 
Finally, the number is 5, and the nearest smaller number on its left is 4.
Constraints:
1 ≤ arr.size()≤ 106
1 ≤ arr[i] ≤ 103    */






class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        stack<int>st;
        vector<int>ans(arr.size(),-1);
        for(int i = 0; i < arr.size(); i++){
            while(st.size() > 0 && st.top() >= arr[i]){
                st.pop();
            }
            if(st.size() > 0){
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
};