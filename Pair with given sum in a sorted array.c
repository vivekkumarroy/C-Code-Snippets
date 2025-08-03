/*   You are given an integer target and an array arr[]. You have to find number of pairs in arr[] which sums up to target. It is given that the elements of the arr[] are in sorted order.
Note: pairs should have elements of distinct indexes. 

Examples :

Input: arr[] = [-1, 1, 5, 5, 7], target = 6
Output: 3
Explanation: There are 3 pairs which sum up to 6 : {1, 5}, {1, 5} and {-1, 7}.
Input: arr[] = [1, 1, 1, 1], target = 2
Output: 6
Explanation: There are 6 pairs which sum up to 2 : {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1} and {1, 1}.
Input: arr[] = [-1, 10, 10, 12, 15], target = 125
Output: 0
Explanation: There is no such pair which sums up to 125.
Constraints:
-105 <= target <=105
 2 <= arr.size() <= 105
-105 <= arr[i] <= 105  */






class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int p1 = 0,p2 = arr.size()-1;
        int count = 0;
        while(p1<p2){
            if(arr[p1]+ arr[p2] == target){
                int val1 = arr[p1];
                int val2 = arr[p2];
                int count1 = 0;
                int count2 = 0;
                while(p1<=p2 && arr[p1] == val1){
                    p1++;
                    count1++;
                }
                while(p1<=p2 && arr[p2] == val2){
                    p2--;
                    count2++;
                }
                if(val1 == val2){
                    count+= (count1*(count1-1))/2;
                }
                else{
                    count+= count1*count2;
                }
            }
            else if(arr[p1] + arr[p2] > target){
                p2--;
            }
            else{
                p1++;
            }
        }
        return count;
    }
};