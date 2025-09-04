/*  Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.

Examples:

Input: arr[] = [-1, -2, -3, 4, 5, 6, 7], d = 2
Output: [-3, 4, 5, 6, 7, -1, -2]
Explanation: 
Rotate by 1: [-2, -3, 4, 5, 6, 7, -1]
Rotate by 2: [-3, 4, 5, 6, 7, -1, -2]
Input: arr[] = [1, 3, 4, 2], d = 3 
Output: [2, 1, 3, 4]
Explanation: After rotating the array three times, the first three elements shift one by one to the right.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size ≤ 106
-109 ≤ arr[i] ≤ 109
0 ≤ d ≤ arr.size   */






// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {

        int p1 = 0;
        int p2 = arr.size()-1;
        while(p1<p2){
            int temp = arr[p1];
            arr[p1] =arr[p2];
            arr[p2]=temp;
            p1++;
            p2--;
        }
        int p3=0,p4=arr.size()-d-1;
        while(p3<p4){
            int temp = arr[p3];
            arr[p3] =arr[p4];
            arr[p4]=temp;
            p3++;
            p4--;
        }
        
        int p5=arr.size()- d,p6=arr.size()-1;
        while(p5<p6){
            int temp = arr[p5];
            arr[p5] =arr[p6];
            arr[p6]=temp;
            p5++;
            p6--;
        }
        
    }
};