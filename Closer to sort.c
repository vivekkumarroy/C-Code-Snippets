/*  You are given an array arr[] of distinct positive integers that is closely sorted, and a target element x, your task is to find the index of x in the array. If x is not present, return -1.
Closer Sorted: The first array is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e, maybe to the arr[i+1] or arr[i-1].

Examples:

Input: arr[] = [3 2 10 4 40], x = 2
Output: 1
Explanation: 2 is present at index 1 (0-based indexing) in the given array.
Input: arr[] = [2 1 4 3], x = 5
Output: -1
Explanation: 5 is not in the array so the output will be -1.
Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i],x ≤ 109

   */




 class Solution {
  public:
    int closer(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x) return mid;
            else if((mid<n-1) && (x>=min(arr[mid],arr[mid+1]))){
                if (mid>0 && arr[mid-1]==x) return mid-1;
                low=mid+1;
            }
            else high=mid-1;
        }
        return -1;
    }
};
  