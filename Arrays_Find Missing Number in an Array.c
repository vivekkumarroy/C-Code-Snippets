/* You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.

Your task is to read the input, determine the missing number, and print the output.

Input Format

The first line contains a single integer N (size of the full sequence).
The second line contains N-1 distinct integers in the range [1, N] in any order.
Constraints

2 ≤ N ≤ 10^5
1 ≤ arr[i] ≤ N
The array contains distinct integers and is missing exactly one number.
Output Format

Print the missing number in the sequence.
Sample Input 0

7
3 7 1 2 6 5
Sample Output 0

4
Sample Input 1

5
1 2 4 5
Sample Output 1

3   */




#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      
     int size,sum=0;
     scanf("%d",&size);
   int arr[size];
       for(int i=0;i<=size-1;i++){
           scanf("%d",&arr[i]);
       }
    
        int sumOfAllNumber = (size*(size+1))/2;
        
        for(int j=0;j<=size-2;j++){

             sum+=arr[j];
                
            }  
        printf("%d",sumOfAllNumber-sum);
    
           
        
    
    
    return 0;
}