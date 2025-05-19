/* You are given an array of integers. A majority element in an array is an element that appears more than ⌊n/2⌋ times, where n is the size of the array. Your task is to determine if the array contains a majority element. If it does, print the majority element; otherwise, print "No Majority Element".

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers representing the array elements.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
Output Format

Print the majority element if one exists.
If no majority element exists, print "No Majority Element".
Sample Input 0

7
3 3 4 2 4 4 2
Sample Output 0

No Majority Element
Sample Input 1

7
2 2 1 1 2 2 3
Sample Output 1

2  */






#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int count = 0;
    int candidate = 0;

    // Step 1: Find a potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findMajorityElement(arr, n);
    if (result == -1)
        printf("No Majority Element\n");
    else
        printf("%d\n", result);

    return 0;
}

