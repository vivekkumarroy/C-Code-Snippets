/*  Given two different arrays arr1[] and arr2[], the task is to merge the two unsorted arrays and return a sorted array.

Examples:

Input: arr1[] = [10, 5, 15] , arr2[] = [20, 3, 2]
Output: [2, 3, 5, 10, 15, 20]
Explanation: After merging both the array's and sorting it with get the desired output.  
Input: arr1[] = [1, 10, 5, 15] , arr2[] = [20, 0, 2]
Output: [0, 1, 2, 5, 10, 15, 20]
Expected Time Complexity: O (nlogn + mlogm + (n + m))
Expected Auxiliary Space: O(n+m).

Constraints:
1 ≤ arr1.size(), arr2.size()≤ 105
-105 ≤ arr1[i], arr2[i]≤ 105  */





class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        // Your code goes here
        int n = arr1.size();
        int m = arr2.size();
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int p1 = 0,p2 = 0,p3 = 0;
        while(p1<n && p2 <m){
            if(arr1[p1] < arr2[p2]){
                 res[p3] = arr1[p1];
                 p1++;
                 p3++;
            }
            else{res[p3] = arr2[p2];
                p2++;
                p3++;
            }
        }
        
        while(p1<n){
            res[p3] = arr1[p1];
            p1++;
            p3++;
        }
        while(p2<m){
          res[p3] = arr2[p2];
          p2++;
          p3++;
        }
        // return res;
        
    }
};