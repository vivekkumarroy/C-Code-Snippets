/*  You are given an array of integers and a target element. Your task is to find the first occurrence index of the target element in the array. If the element is not found, return -1.

Input Format

The first line contains an integer N, the size of the array.
The second line contains N space-separated integers, representing the array elements.
The third line contains a single integer, target, the element to search for.
Constraints

1 ≤ N ≤ 10^5
−10^6 ≤ arr[i] ≤ 10^6
1 ≤ target ≤ 10^5
Output Format

Print the 0-based index of the first occurrence of target in the array.
If target is not found, print -1.
Sample Input 0

6
4 2 7 2 9 5
2
Sample Output 0

1
Sample Input 1

5
1 3 5 7 9
4
Sample Output 1

-1               */







#include <stdio.h>

int main() {

    int size,target;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
        
    }
    scanf("%d",&target);
      int i;
    for(i=0;i<=size-1;i++){
        if(target==arr[i])
            break;
      }
    if(i<size){
        printf("%d",i);
        
    }
    else{
        printf("-1");
    }
      
    
       
    
    return 0;
}