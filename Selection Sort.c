/* Given an array arr, use selection sort to sort arr[] in increasing order.

Examples :

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: Maintain sorted (in bold) and unsorted subarrays. Select 1. Array becomes 1 4 3 9 7. Select 3. Array becomes 1 3 4 9 7. Select 4. Array becomes 1 3 4 9 7. Select 7. Array becomes 1 3 4 7 9. Select 9. Array becomes 1 3 4 7 9.
Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Input: arr[] = [38, 31, 20, 14, 30]
Output: [14, 20, 30, 31, 38]
Constraints:
1 ≤ arr.size() ≤ 103
1 ≤ arr[i] ≤ 106  */





class Solution {
  public:
    
    void selectionSort(vector<int> &arr) {
        for(int i  = 0; i<arr.size();i++){
            int index = i;
            for(int j = i+1; j<arr.size();j++){
                 if(arr[index] > arr[j]){
                     index = j;
                     
                 }
            }
            
            swap(arr[i],arr[index]);
            
        }
        
    }
};