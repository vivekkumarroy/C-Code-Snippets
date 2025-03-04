/*  Write a program to generate the Collatz sequence for a given positive integer n. Starting with any positive integer n, Collatz sequence is defined corresponding to n as the numbers formed by the following operations :

If n is even, then n = n / 2.
If n is odd, then n = 3*n + 1.
Repeat above steps, until it becomes 1.
Input Format

A single integer n.
Constraints

1 ≤ n ≤ 10^5
Output Format

A single line containing the sequence of numbers, separated by a ( -> ).
Sample Input 0

6
Sample Output 0

6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
Sample Input 1

15
Sample Output 1

15 -> 46 -> 23 -> 70 -> 35 -> 106 -> 53 -> 160 -> 80 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

  */



  #include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    printf("%d",n);
      while(n>0&&n!=1){
          if(n%2==0){
              printf(" -> %d",n/2);
              n=n/2;
          }
          else{
              printf(" -> %d",3*n+1);
              n=3*n+1;
          }
         
      }
    return 0;
}