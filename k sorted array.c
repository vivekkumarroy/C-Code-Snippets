/*  Given an array of n distinct elements. Check whether the given array is a k-sorted array or not. A k-sorted array is an array where each element is at most k distance away from its target position in the sorted array. 
Return "Yes" if the array is a k-sorted array else return "No".

Examples

Input: n=6, arr[] = {3, 2, 1, 5, 6, 4}, k = 2
Output: Yes
Explanation: Every element is at most 2 distance away from its target position in thesorted array.  
Input: n=7, arr[] = {13, 8, 10, 7, 15, 14, 12}, k = 1
Output: No
Expected Time Complexity: O(nlogn).
Expected Auxiliary Space: O(n).

Constraints:
1 ≤ n ≤ 105
0 ≤ k ≤ n  */




// User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
        unordered_map<int,int>v;
        for(int i = 0;i<n;i++){
            v[arr[i]] = i;
        }
        
        sort(arr,arr+n);
        for(int i = 0;i<n;i++){
            if(abs(v[arr[i]] - i) > k){
                return "No";
            }
        }
        return "Yes";
    }
};