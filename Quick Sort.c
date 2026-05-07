/*  Implement Quick Sort, a Divide and Conquer algorithm, to sort an array, arr[] in ascending order.
Given an array arr[], with starting index low and ending index high, complete the functions partition() and quickSort().
Use the last element as the pivot, so that all elements less than or equal to the pivot come before it, and elements greater than the pivot follow it.

Note: low and high are inclusive.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: After sorting, all elements are arranged in ascending order.
Input: arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]
Output: [1, 1, 2, 3, 4, 6, 7, 9, 10]
Explanation: Duplicate elements (1) are retained in sorted order.
Input: arr[] = [5, 5, 5, 5]
Output: [5, 5, 5, 5]
Explanation: All elements are identical, so the array remains unchanged.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
  */




  class Solution {
  public:
  
    int partition(vector<int>& arr, int low, int high) {
        
        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++) {
            
            if(arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        return i + 1;
    }

    void quickSort(vector<int>& arr, int low, int high) {
        
        if(low < high) {
            
            int p = partition(arr, low, high);
            quickSort(arr, low, p - 1);

            quickSort(arr, p + 1, high);
        }
    }
};