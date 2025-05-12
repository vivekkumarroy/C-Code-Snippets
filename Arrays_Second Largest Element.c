/*  Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.

Function Signature

int findSecondLargest(int arr[], int n);
Input Format

The function will receive:
An integer n, the number of elements in the array.
An integer array arr[] of size n, where arr[i] represents the i-th element.
Constraints

1 ≤ n ≤ 10^5
−10^9 ≤ arr[i] ≤ 10^9
The function should run in O(N) time complexity and use O(1) extra space.
Output Format

Return the second largest element in the array.
If there is no valid second largest element, return -1.
Sample Input 0

5  
1 3 4 5 2  
Sample Output 0

4  
Sample Input 1

4  
7 7 7 7  
Sample Output 1

-1   */






#include <stdio.h>


int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
        int temp;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j< n-i;j++){
            if(arr[j]>arr[j+1]){
                 temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // if(arr[n-1]==arr[n-2]){
    //     return -1;
    // }
    // return arr[n-2];
    
    for(int i=0;i<=n-2;i++){
        if(arr[n-1-i]>arr[n-2-i])
            return arr[n-2-i];
        
    }
    
    return -1;
        
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}