/*  Write a program to determine whether a given integer N is even or odd using only bitwise operators.

The program should not use the modulo (%) operator.

Input Format

A single integer N
Constraints

-10^5 ≤ N ≤ 10^5
Output Format

Print Even if N is an even number.
Print Odd if N is an odd number.

Sample Input 0
4   

Sample Output 0
Even

Sample Input 1
19

Sample Output 1
Odd                  */



#include <stdio.h>

int main() {

    int x;
    scanf("%d",&x);
    int y=x&1;
    if(y==0){
        printf("Even");
    }
    else if(y==1){
        printf("Odd");
    }
    return 0;
}