/* You are given an array that contains only the integers 7, 8, and 9 in arbitrary order. Your task is to write a function sortArray() that sorts the array in non-decreasing order. In other words, after sorting, all 7s should appear first, followed by all 8s, and finally all 9s. The function should modify the array in-place.

Function Signature

void sortArray(int arr[], int n);
Input Format

The first line contains an integer n denoting the size of the array.
The second line contains n space-separated integers. Each integer is either 7, 8, or 9.
Constraints

1 ≤ n ≤ 10^6
Each element in the array is one of {7, 8, 9}.
Output Format

After sorting the array, the sorted array is printed as space-separated integers on a single line.
Sample Input 0

6
9 7 8 9 7 8
Sample Output 0

7 7 8 8 9 9
Sample Input 1

6  
7 7 8 8 9 9  
Sample Output 1

7 7 8 8 9 9    */




#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    // Implement sorting logic here
    int count7=0,count8=0,count9=0;
    for (int i=0; i<n;i++) {
        if (arr[i] == 7) {
            count7++;
        } 
        else if(arr[i] == 8) {
            count8++;
        } 
        else if(arr[i] == 9) {
            count9++;
        }
    }
    int j=0;
    for (int i=0;i<count7;i++) {
        arr[j] = 7;
        j++;
    }
    for (int i=0;i<count8;i++) {
        arr[j] = 8;
        j++;
    }
    for (int i=0;i<count9;i++) {
        arr[j] = 9;
        j++;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}