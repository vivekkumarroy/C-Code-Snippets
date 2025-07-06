/* Given an array arr of non-negative integers, return the maximum product of two numbers possible.

Example:

Input: arr[] = [1, 4, 3, 6, 7, 0] 
Output: 42
Explanation: 6 and 7 have the maximum product.
Input: arr[] = [1, 100, 42, 4, 23]
Output: 4200
Explanation:  42 and 100 have the maximum product.
Constraints:
2 ≤ arr.size ≤ 107
0 ≤ arr[i] ≤ 109 */






// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        for(int i = 0 ;i < 2; i++){
            for(int j = 0 ; j < arr.size()-i - 1 ; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
                
            }
        }
        return arr[arr.size()-1] * arr[arr.size()-2];
    }
};