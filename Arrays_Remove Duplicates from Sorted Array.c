/* You are given a sorted array of integers. Your task is to modify the array in-place to remove duplicate elements so that each unique element appears only once.

The function should not return anything; instead, it must modify the given array itself.

Function Signature

void removeDuplicates(int arr[], int *n);
arr[]: The sorted input array (modifies in-place).
n: Pointer to the integer representing the size of the array (*n should be updated to the new size after removing duplicates).
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array arr such that the first k elements of arr contain the unique elements in the order they were present in arr initially. The remaining elements of arr are not important as well as the size of arr.
Change the initial value of n as k.
Input Format

The input is handled by the code stub:
The first line contains an integer n – the number of elements in the array.
The second line contains n space-separated integers, sorted in non-decreasing order.
Constraints

1 ≤ n ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶
You must modify the given array in-place → No additional arrays should be used.
Output Format

The output is also handled by the stub:
The modified array is be printed with only unique elements in order.
The new size of the array is also be printed.
Sample Input 0

6
2 2 3 4 5 6
Sample Output 0

2 3 4 5 6
5
Sample Input 1

11
1 1 2 2 2 3 3 4 4 5 5
Sample Output 1

1 2 3 4 5
5                        */





#include <stdio.h>

void removeDuplicates(int arr[], int *n){
	//Implement the function here
    if (*n == 0 || *n == 1) {
        return; 
    }
    int k = 1; 
    for (int i=1; i<*n; i++) {
        if (arr[i] != arr[k-1]) {
            arr[k] = arr[i];
            k++;
        }
    }
    *n = k;
    
    // printf("%d\n",*n);
    
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); // Print new size

    return 0;
}