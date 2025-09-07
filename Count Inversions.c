/* Given an array of integers arr[]. You have to find the Inversion Count of the array. 
Note : Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

Examples:

Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 104   */







class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int>& arr,int s,int m,int e){
      int c[e-s+1];
      int p1 = s,p2 = m+1,p3 = 0;
      int mc = 0;
      while(p1<=m && p2<=e){
          if(arr[p1]<=arr[p2]) {
              c[p3] = arr[p1];
              p1++;
              p3++;
          }
          else{
              c[p3] = arr[p2];
              p2++;
              p3++;
              mc += m - p1 + 1;
          }
      }
      
      while(p1<=m){
          c[p3] = arr[p1];
              p1++;
              p3++;
      }
      
      while(p2<=e){
          c[p3] = arr[p2];
              p2++;
              p3++;
      }
      
      for(int i =s;i<=e;i++){
          arr[i] = c[i-s];
      }
      return mc;
  }
  long long mergeSort(vector<int>& arr, int l, int r) {
        if(l == r) return 0;
        int m = (l+r)/2; 
        int lc = mergeSort(arr,l,m);
        int rc = mergeSort(arr,m+1,r);
        int mc = merge(arr,l,m,r);
        return lc + rc + mc;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
          return mergeSort(arr,0,arr.size()-1);
    }
};