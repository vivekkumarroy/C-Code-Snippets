/*  Write a program to check if a given integer n is a multiple of 4 using only bitwise operators. You are not allowed to use the modulus operator (%), division operator (/), or loops. Use bitwise operations to determine the result efficiently.

Input Format

A single integer n.
Constraints

−10^5 ≤ n ≤10^5
Output Format

Print "Yes" if the number is a multiple of 4.
Print "No" otherwise

Sample Input 0
4

Sample Output 0
Yes

Sample Input 1
400

Sample Output 1
Yes              */



#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int x=n&1;
    
    if(x==0){
      if((n&(1<<1))==0){
          printf("Yes");
      }
        else {
            printf("No");
        }
    }
    else  {
        printf("No");
    }
    return 0;
}