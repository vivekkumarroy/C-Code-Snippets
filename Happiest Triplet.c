/*   You are given the three arrays arr1[], arr2[], arr3[] of the same size . Find a triplet such that (maximum-minimum) in that triplet is the minimum of all the triplets. A triplet should be selected so that it should have one number from each of the three given arrays. This triplet is the happiest among all the possible triplets. Print the triplet in decreasing order.

Note: If there are 2 or more smallest difference triplets, then the one with the smallest sum of its elements should be displayed.

Examples:

Input: arr1[] = [5, 2, 8] , arr2[] = [10, 7, 12] , arr3[] = [9, 14, 6]
Output: [7, 6, 5]
Explanation: The triplet { 5,7,6 }  has difference (maximum - minimum)= (7-5) =2 which is minimum of all triplets.  
Input: arr1[] = [15, 12, 18, 9] , arr2[] = [10, 17, 13, 8] , arr3[] = [14, 16, 11, 5]
Output: [11, 10, 9]
Expected Time Complexity: O(n*logn)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr1.size(),arr2.size(),arr3.size() ≤ 105
1 ≤ arr1[i],arr2[i],arr3[i] ≤ 105

  */





  class Solution {
  public:
    vector<int> smallestDifferenceTriplet(vector<int>& arr1, vector<int>& arr2,
                                          vector<int>& arr3) {
        // code here.
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        sort(arr3.begin(),arr3.end());
        int n = arr1.size();
        int p1 = 0,p2 = 0,p3 = 0;
        vector<int>ans;
        int diff = INT_MAX;
        while(p1<n && p2<n && p3 <n){
            int minValue = min({arr1[p1],arr2[p2],arr3[p3]});
            int maxValue = max({arr1[p1],arr2[p2],arr3[p3]});
            int curr_diff = (maxValue - minValue);
            if(curr_diff < diff){
                diff = curr_diff;
                ans = {arr1[p1],arr2[p2],arr3[p3]};
            }
            if(minValue == arr1[p1]){
                p1++;
            }
            else if(minValue == arr2[p2]){
                p2++;
            }
            else if(minValue == arr3[p3]){
                p3++;
            }
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
         
        return ans;
    }
};