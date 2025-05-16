/* You are given an array of integers. Your task is to implement a function that moves all the zeros to the end of the array in-place, while maintaining the relative order of the non-zero elements. You do not need to return anything.

Function Signature

void moveZerosToEnd(int arr[], int n);
Input Format

The function moveZerosToEnd will receive:
An integer array arr of size n.
An integer n representing the number of elements in the array.
Constraints

1 ≤ n ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶
You must modify the given array in-place → No additional arrays should be used.
Output Format

The function should modify the given array in-place by moving all zeros to the end.
You do not need to print anything.
Sample Input 0

5
0 1 0 3 12
Sample Output 0

1 3 12 0 0
Sample Input 1

6
1 2 0 0 3 4
Sample Output 1

1 2 3 4 0 0  */







#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    // Implement your logic here
          int count=0;
           
         for(int i=0;i<=n-1;i++){
             if(arr[i]!=0){
            arr[count] = arr[i];
                 count++;
            }
      }
    
    while(count<=n-1){
        
        arr[count]=0;
        count++;
    }  
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}