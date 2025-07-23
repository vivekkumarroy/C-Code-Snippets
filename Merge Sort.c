/* Given an array arr[], its starting position l and its ending position r. Sort the array using the merge sort algorithm.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: We get the sorted array after using merge sort

Input: arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: We get the sorted array after using merge sort 
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105  */


class Solution {
  public:
  void merge(vector<int>& arr,int s,int m,int e){
      int c[e-s+1];
      int p1 = s,p2 = m+1,p3 = 0;
      while(p1<=m && p2<=e){
          if(arr[p1]<arr[p2]) {
              c[p3] = arr[p1];
              p1++;
              p3++;
          }
          else{c[p3] = arr[p2];
              p2++;
              p3++;}
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
  }
  
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l == r)return;
        int m = (l+r)/2; 
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};