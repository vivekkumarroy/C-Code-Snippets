/* You are given two sorted arrays of integers. Your task is to find:

Union: A sorted array containing all unique elements from both arrays.
Intersection: A sorted array containing only the common elements from both arrays.
You must write a code which takes two array inputs and outputs union and intersection of two arrays, if possible.

Input Format

The first line contains an integer n₁, the number of elements in the first array.
The second line contains n₁ space-separated integers.
The third line contains an integer n₂, the number of elements in the second array.
The fourth line contains n₂ space-separated integers.
Constraints

1 ≤ n₁,n₂ ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶ for each element in both arrays
The input arrays are already sorted in non-decreasing order
Duplicates may appear in the input arrays.
The final union and intersection arrays should be printed in ascending order.
Output Format

First line: The union of the two arrays (all unique elements from both arrays, in ascending order).
Second line: The intersection of the two arrays (all common unique elements, in ascending order), or "Intersection Not Possible" if the intersection is empty.
Sample Input 0

5
1 2 3 4 5
5
3 4 6 7 8
Sample Output 0

1 2 3 4 5 6 7 8
3 4
Sample Input 1

6
-5 -3 0 1 3 5
7
-4 -3 0 2 3 4 6
Sample Output 1

-5 -4 -3 0 1 2 3 4 5 6
-3 0 3   */






#include <stdio.h>

#define MAX 100000

int main() {
    int n1, n2;
    int a[MAX], b[MAX];
    int i, j;
    int last = 2000001;
    int found = 0;

    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    i = 0;
    j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (a[i] != last) {
                printf("%d ", a[i]);
                last = a[i];
            }
            i++;
        } else if (a[i] > b[j]) {
            if (b[j] != last) {
                printf("%d ", b[j]);
                last = b[j];
            }
            j++;
        } else {
            if (a[i] != last) {
                printf("%d ", a[i]);
                last = a[i];
            }
            i++;
            j++;
        }
    }
    while (i < n1) {
        if (a[i] != last) {
            printf("%d ", a[i]);
            last = a[i];
        }
        i++;
    }
    while (j < n2) {
        if (b[j] != last) {
            printf("%d ", b[j]);
            last = b[j];
        }
        j++;
    }
    printf("\n");


    i = 0;
    j = 0;
    last = 2000001;
    found = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            if (a[i] != last) {
                printf("%d ", a[i]);
                last = a[i];
                found = 1;
            }
            i++;
            j++;
        }
    }

    if (!found) {
        printf("Intersection Not Possible");
    }

    printf("\n");

    return 0;
}
