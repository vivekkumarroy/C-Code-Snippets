/*  You are given an array of integers. Your task is to determine whether the array is sorted in non-decreasing order.

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
Output Format

Print "Sorted" if the array is sorted in non-decreasing order.
Otherwise, print "Not Sorted".
Sample Input 0

5
1 2 3 4 5
Sample Output 0

Sorted
Sample Input 1

5
1 3 2 4 5
Sample Output 1

Not Sorted  */





#include <stdio.h>


int main() {
    
    
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i< size-1;i++){
        for(int j=i+1;j<=size-1;j++){
            
            if(arr[i]>arr[j]){
                
                printf("Not Sorted");
            
                 return 0;
            }
            
        }
        
        
    }
     printf("Sorted");

    return 0;
}
