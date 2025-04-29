/*  Write a program to count the number of even and odd numbers in an array. The program should print the count of even and odd numbers separately.

Input Format

The first line contains an integer n — the number of elements in the array.
The second line contains n space-separated integers arr[] where each element arr[i] represents the i-th element of the array.
Constraints

1 ≤ n ≤ 10^5
−10^9 ≤ arr[i] ≤ 10^9
The program should run in O(N) time complexity and use O(1) extra space.
Output Format

Print two space-separated integers: the count of even numbers followed by the count of odd numbers in the array.
Sample Input 0

5
1 2 3 4 5
Sample Output 0

2 3
Sample Input 1

4
0 -1 -2 3
Sample Output 1

2 2   */






#include <stdio.h>

int main() {

    int n,evenCount=0,oddCount=0;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    // printf("%d",a[4]);
    
    for(int i=0;i<=n-1;i++){
           // printf("%d",a[i]);
        if((a[i]&1)==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
            
    }
     printf("%d %d",evenCount,oddCount);
    
    return 0;
}