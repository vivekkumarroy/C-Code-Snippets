/*  Given an array arr[], the task is to find the sum of the maximum elements of every possible non-empty sub-arrays of the given array arr[].

Note: The answer will always fit into 32 bit integer.

Examples:

Input: arr[] = [1, 3, 2]
Output: 15
Explanation: All possible non-empty subarrays of [1, 3, 2] are [1], [3], [2], [1, 3], [3, 2] and [1, 3, 2]. The maximum elements of the subarrays are 1, 3, 2, 3, 3, 3 respectively. The sum will be 15.
Input: arr[] = [3, 1]
Output: 7
Explanation: All possible non-empty subarrays of [3, 1] are [3], [1] and [3, 1]. The maximum elements of the subarrays are 3, 1, 3 respectively. The sum will be 7.
Input: arr[] = [8, 0, 1]
Output: 26
Explanation: All possible non-empty subarrays of [8, 0, 1] are [8], [0], [1], [8, 0], [0, 1] and [8, 0, 1]. The maximum elements of the subarrays are 8, 0, 1, 8, 1, 8 respectively. The sum will be 26.
Constraints:
1 <= arr.size() <= 104
0 <= arr[i] <= 109  */






class Solution {
  public:
    int sumOfMax(vector<int> &arr) {
        // code here
        stack<int>st1;
        vector<int>ans1(arr.size(),arr.size());
        stack<int>st2;
        vector<int>ans2(arr.size(),-1);
        for(int i = arr.size()-1;i>=0;i--){
            while(st1.size() > 0 && arr[st1.top()] <= arr[i]){
                st1.pop();
            }
            if(st1.size() > 0){
                ans1[i] = st1.top();
            }
            st1.push(i);
            
        }
        for(int i = 0;i<arr.size();i++){
            while(st2.size() > 0 && arr[st2.top()] < arr[i]){
                st2.pop();
            }
            if(st2.size() > 0){
                ans2[i] = st2.top();
            }
            st2.push(i);
            
        }
        int sum = 0;
        for(int i = 0;i<arr.size();i++){
            sum += arr[i]*(i - ans1[i])* (ans2[i] - i);
        }
        return sum;
        
    }
};