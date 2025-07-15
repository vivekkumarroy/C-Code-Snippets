/*   Given an array of integers arr[] that is first strictly increasing and then maybe strictly decreasing, find the bitonic point, that is the maximum element in the array.
Bitonic Point is a point before which elements are strictly increasing and after which elements are strictly decreasing.

Note: It is guaranteed that the array contains exactly one bitonic point.

Examples:

Input: arr[] = [1, 2, 4, 5, 7, 8, 3]
Output: 8
Explanation: Elements before 8 are strictly increasing [1, 2, 4, 5, 7] and elements after 8 are strictly decreasing [3].
Input: arr[] = [10, 20, 30, 40, 50]
Output: 50
Explanation: Elements before 50 are strictly increasing [10, 20, 30 40] and there are no elements after 50.
Input: arr[] = [120, 100, 80, 20, 0]
Output: 120
Explanation: There are no elements before 120 and elements after 120 are strictly decreasing [100, 80, 20, 0].
Constraints:
3 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 106

  */




  // User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int l = 1 , h = n-2;
        if(arr[0] > arr[1]) return arr[0];
        if(arr[n-1] > arr[n-2]) return arr[n-1];
        while(l<=h){
            int m = (l+h)/2;
            if(arr[m] > arr[m-1] && arr[m] > arr[m+1] ) return arr[m];
            else if(arr[m] > arr[m - 1]){
                l = m+1;

            }
            else{
                h = m-1;
            }
        }
        return -1;
    }
};