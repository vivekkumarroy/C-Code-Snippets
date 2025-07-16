/*  Given a sorted array arr[] that represents an Arithmetic Progression (AP) with exactly one missing element, find the missing number.
The array arr[] is sorted in either ascending or descending order.

Note: An element will always exist that, upon inserting into a sequence forms Arithmetic progression. If the given sequence already forms a valid complete AP, return the (n+1)-th element that would come next in the sequence.

Examples:

Input: arr[] = [2, 4, 8, 10, 12, 14]
Output: 6
Explanation: Actual AP should be 2, 4, 6, 8, 10, 12, 14.
Input: arr[] = [1, 6, 11, 16, 21, 31]
Output: 26
Explanation: Actual AP should be 1, 6, 11, 16, 21, 26, 31.
Input: arr[] = [4, 7, 10, 13, 16]
Output: 19
Explanation: Since the sequence already forms a valid AP, the next element after 16 in the sequence would be 19. Therefore, the output is 19.
Constraints:
2 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 2*107  */




class Solution {
  public:
    int findMissing(vector<int>& arr) {
        int n = arr.size();
        int d1 = arr[1] - arr[0];
        int d2 = arr[n - 1] - arr[n - 2];
        int d;
        if (n == 2) {
            d = d1;
        } 
        else {
            int count1 = 0, count2 = 0;
            for (int i = 1; i < n; i++) {
                if (arr[i] - arr[i - 1] == d1) {
                    count1++;
                }
                if (arr[i] - arr[i - 1] == d2) {
                    count2++;
                }
            }
            d = (count1 > count2) ? d1 : d2;
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] != d) {
                return arr[i - 1] + d;
            }
        }
        return arr[n - 1] + d;
    }
};