/*   Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.

Input Format

A single integer n
Constraints

-2^31 ≤ n ≤ 2^31
Output Format

Output the count of set bits in the first 4 bits of n.

Sample Input 0
29

Sample Output 0
3

Sample Input 1
15

Sample Output 1
4                      */


#include <stdio.h>

int main() {

  int n;
    scanf("%d",&n);
      int x=((n&1)+((n>>1)&1)+((n>>2&1)+((n>>3)&1)));
             printf("%d",x);
    return 0;
}