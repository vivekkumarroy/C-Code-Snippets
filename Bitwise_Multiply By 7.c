/*  Write a program to multiply a given integer n by 7 using only bitwise operators. You are not allowed to use the multiplication (*) operator directly.

Input Format

A single integer n.
Constraints

−10^5 ≤ n ≤ 10^5
Output Format

Print a single integer: the result of n×7.

Sample Input 0
1

Sample Output 0
7

Sample Input 1
3

Sample Output 1
21                     */



#include <stdio.h>

int main() {

     int n;
    scanf("%d",&n);
    n=(n<<3)-n;
    printf("%d",n);
    return 0;
}          