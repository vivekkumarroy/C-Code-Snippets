/* Given an array of integers that may contain duplicate elements and an integer K, your task is to find the Kth smallest element in the array without using a sorting algorithm. Instead of sorting the entire array, solve the problem using an efficient algorithm.

Function Signature

int kthSmallest(int arr[], int n, int k);
Note: Each unique number should be considered only once. For example, given the array [1, 1, 2], the 2nd smallest element is 2, not 1.

Input Format

Line 1: An integer n representing the number of elements in the array.
Line 2: n space-separated integers representing the elements of the array.
Line 3: An integer k, representing the order of the smallest element to find.
Constraints

1 ≤ n ≤ 10^5
-10^9 ≤ arr[i] ≤ 10^9
1 ≤ k ≤ n
Output Format

A single integer representing the Kth smallest element in the array.
Sample Input 0

6
7 10 4 3 20 15
3
Sample Output 0

7
Sample Input 1

5
7 10 4 20 15
4
Sample Output 1

15         */








#include <stdio.h>
#include <limits.h>

int kthSmallest(int arr[], int n, int k) {
  // Write your code here
     int current=0;
    int prev=INT_MIN;
    
    for(int i=1;i<=k;i++){
        current=INT_MAX;
        for(int j=0;j<=n-1;j++){
            if(arr[j]<current && arr[j]>prev){
                {
                    current=arr[j];
                }
            }
        }
        prev=current;
    }
    
    return current;     
}
int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));
    
    

  return 0;
}