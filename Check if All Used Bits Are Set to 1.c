/* You are given an integer n. Write a program to check if all the used bits (excluding padded bits) in the binary representation of n are set to 1.

A number is said to have all its used bits set to 1 if the binary representation of the number consists entirely of 1s, starting from the least significant bit up to the most significant used bit. For example, the binary representation of 7 is 111, where all the bits are 1. However, the binary representation of 5 is 101, where not all bits are set to 1.

Input Format

A single integer n where n is a 32-bit signed integer
Constraints

-2^31 ≤ n < 2^31
Output Format

Print "Yes" if all the bits in the binary representation of n (from the least significant bit to the most significant used bit) are set to 1.
Print "No" if there are any 0s in between the 1s in the binary representation of n.

Sample Input 0
7

Sample Output 0
Yes

Sample Input 1
5

Sample Output 1
No                                */



#include <stdio.h>

int main() {
int n,r;
    scanf("%d",&n);
    r=(n&(n+1));
    
    if(n==0){
        printf("No");
        return 0;
    }
     
    if (r==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    
    return 0;
}