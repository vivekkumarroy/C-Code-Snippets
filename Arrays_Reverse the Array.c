/* You are given an array of integers. Your task is to implement a function that reverses the order of the elements in the array in-place. You do not need to return anything.

Function Signature

void reverseArray(int arr[], int n);
Input Format

The function reverseArray will receive:
An integer array arr of size n.
An integer n representing the number of elements in the array.
Constraints

1 ≤ n ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶
You must modify the given array in-place → No additional arrays should be used.
Output Format

The function should modify the given array in-place by reversing its elements.
You do not need to print anything.
Sample Input 0

6  
1 2 3 4 5 6  
Sample Output 0

6 5 4 3 2 1  
Sample Input 1

5  
5 10 15 20 25  
Sample Output 1

25 20 15 10 5    */






#include <stdio.h>

void reverseArray(int arr[], int n) {
    // Implement the function to reverse the array in-place
    
    for(int i=0;i<=n/2-1;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}