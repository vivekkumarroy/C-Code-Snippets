/*   Given an array arr, find the average or mean of the prefix array at every index.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: [10, 15, 20, 25, 30] 
Explanation: 10 / 1 = 10, (10 + 20) / 2 = 15, (10 + 20 + 30) / 3 = 20 and so on.
Input: arr[] = [12, 2]
Output: [12, 7] 
Constraints:
1 ≤ arr.size ≤ 105
1 ≤ arr[i] ≤ 106    */







// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n = arr.size();
        int lAverage = 0;
        long lSum = 0;
         vector<int>average;
        // for(int i=0;i<=n-1;i++){
        //       sum+=arr[i]; 
        // }
        
        for(int i=0;i<=n-1;i++){
            lSum += arr[i];
            lAverage = (lSum)/(i+1);
             average.push_back(lAverage);
        }
        return average;
    }
};