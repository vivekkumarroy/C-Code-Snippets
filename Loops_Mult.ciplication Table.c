/*  Write a program to print the multiplication table of a given number n from 1 to 10.

Input Format

A single integer n
Constraints

0 <= n <= 1000
Output Format

For a given n, the output should look like this:
n x 1 = n
n x 2 = 2n
n x 3 = 3n
...
n x 10 = 10n

Sample Input 0
7

Sample Output 0
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70  */


#include<stdio.h>
int main() {

int n;
scanf("%d",&n);
for(int i=1;i<=10;i++){
  printf("%d ",n);
  printf("x ");
  printf("%d ",i);
  printf("=");
  printf(" %d",n*i);
  printf("\n");
}

  return 0;
}