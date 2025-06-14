/*  Given an array arr[] and positive integer k, the task is to count total number of pairs in the array whose sum is divisible by k.

Examples:

Input :  arr[] = {2, 2, 1, 7, 5, 3}, k = 4
Output : 5
Explanation : There are five pairs possible whose sum is divisible by '4' i.e., (2, 2), (1, 7), (7, 5), (1, 3) and (5, 3)
Input : arr[] = {5, 9, 36, 74, 52, 31, 42}, k = 3
Output : 7 
Explanation : There are seven pairs whose sum is divisible by 3, i.e, (9, 36), (9,42), (74, 52), (36, 42), (74, 31), (31, 5) and (5, 52).
Your task :
You don't have to read input or print anything. Your task is to complete the function countKdivPairs() which takes the array, it's size and an integer K as input and returns the count of pairs whose sum is divisible by k.
 
Expected Time Complexity : O(n)
Expected Auxiliary Space : O(k)
 
Constraints :
1 <= n <=10^6
1 <= arr[i] <= 10^6
1 <= k <= 100  */





// User function Template for C++

class Solution {
    public:
      long long countKdivPairs(int A[], int n, int K) {
          // code here
          for(int i = 0; i<n; i++){
              A[i] = A[i]%K;
          }
          
          vector<int>count(K,0);
          long long pair = 0;
          for(int i = 0; i < n; i++){
              
              int t = K - A[i];
              if(A[i]==0){
                  t = 0;
              }
              pair += count[t];
              
              count[A[i]]++;
          }
          
          return pair;
          
      }
  };