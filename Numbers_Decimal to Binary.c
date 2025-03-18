/*  Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros).

Input Format

A single integer N
Constraints

0 ≤ N ≤ 1023
Output Format

A single integer number representing the binary equivalent of N, with a message, "Binary equivalent of [N]: [binaryForm]"
Sample Input 0

16
Sample Output 0

Binary equivalent of 16: 10000
Sample Input 1

19

Sample Output 1

Binary equivalent of 19: 10011   */



#include <stdio.h>

int main() {
    int n, temp, binary = 0, position = 1;

    scanf("%d", &n);
    temp = n;

    if (n == 0) {
        printf("Binary equivalent of %d: 0\n", temp);
        return 0;
    }

    while (n > 0) {
        binary += (n % 2) * position;
        n /= 2;
        position *= 10;  
    }

    printf("Binary equivalent of %d: %d\n", temp, binary);
    
    return 0;
}