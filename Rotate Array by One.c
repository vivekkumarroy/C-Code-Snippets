/*   Given an array arr, rotate the array by one position in clockwise direction.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
Constraints:
1<=arr.size()<=105
0<=arr[i]<=105  */






// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
       int p1 = 0;
       int p2 = arr.size() -1;
       
       while(p1 < p2){
           swap(arr[p1],arr[p2]);
           p1++;
           p2--;
       }
       
       p1 = 1,p2 = arr.size() -1;
       while(p1 < p2){
           swap(arr[p1],arr[p2]);
           p1++;
           p2--;
       }
    }
};