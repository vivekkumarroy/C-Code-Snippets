/*   Write a program to clear the rightmost set bit of an integer n. The result should be the number obtained after flipping the rightmost set bit to 0 while leaving other bits unchanged.

Input Format

A single integer n.
Constraints

−2^31 ≤ n ≤ 2^31
Output Format

Output the integer n after clearing its rightmost set bit.

Sample Input 0
18

Sample Output 0
16

Sample Input 1
8

Sample Output 1
0                           */




#include <stdio.h>

int main() {

    int n;
    scanf("%d ",&n);
    n=(n&(n-1));
    printf("%d",n);
    return 0;
}