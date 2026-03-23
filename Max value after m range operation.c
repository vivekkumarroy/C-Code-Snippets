  /*   Given an array arr of size n, with all initial values set to 0, the task is to perform a series of range increment operations as described below:

Increment(ai, bi, ki):
Increment the values in arr from index ai to bi (both inclusive) by ki.

After performing m operations, calculate the maximum value in the array arr[].

Examples:

Input: n = 5, a[] = [0, 1, 2], b[] = [1, 4, 3], k[] = [100, 100, 100]
Output: 200
Explanation: 
Initially, arr = [0, 0, 0, 0, 0]
After the first operation: arr = [100, 100, 0, 0, 0]
After the second operation: arr = [100, 200, 100, 100, 100]
After the third operation: arr = [100, 200, 200, 200, 100]
The maximum element after all operations is 200.
Input: n = 4, a[] = [1, 0, 3], b[] = [2, 0, 3], k[] = [603, 286, 882]
Output: 882
Explanation: 
Initially, arr = [0, 0, 0, 0]
After the first operation: arr = [0, 603, 603, 0]
After the second operation: arr = [286, 603, 603, 0]
After the third operation: arr = [286, 603, 603, 882]
The maximum element after all operations is 882.
Expected Time Complexity: O(m + n), m is the number of operations.
Expected Auxiliary Space: O(n).

Constraints:
1 ≤ n ≤ 106
1 ≤ a.size() = b.size() = k.size() ≤ 106
0 ≤ ai ≤ bi ≤ n-1
0 ≤ ki ≤ 106  */






class Solution {
  public:
    int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
        // code here
        vector<int>ans(n,0);
        int N = a.size();
        for(int i = 0; i < N;i++){
            ans[a[i]] += k[i];
            if((b[i] + 1) < n){
                 ans[b[i]+ 1] += -k[i];
            }
        }
        long sum = 0;
        for(int i = 0; i < n;i++){
            sum += ans[i];
            ans[i] = sum;
        }
        long maxVal = *max_element(ans.begin(),ans.end());
        return maxVal;
    }
};