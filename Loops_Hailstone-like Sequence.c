/*    Write a program to generate a Hailstone-like sequence for a given integer n based on the following rules:

If the number is divisible by 3, divide it by 3.
If the number is divisible by 5 and not divisible by 3, subtract 5.
If the number is less than 1, it becomes 1.
Otherwise, multiply the number by 5.
The sequence stops when the number reaches to 1.

Print the entire sequence, including the starting number and 1, and the maximum obtained number from the beginning untill it reaches 1.

Input Format

A single integer n.
Constraints

-10^5 ≤ n ≤ 10^5
Output Format

Two lines:

A single line containing the sequence of numbers, separated by a ->.
The maximum number obtained in the sequence, "Max Number: [maxNumber]"
Sample Input 0

10

Sample Output 0

10 -> 5 -> 0 -> 1

Max Number: 10

Sample Input 1

51

Sample Output 1

51 -> 17 -> 85 -> 80 -> 75 -> 25 -> 20 -> 15 -> 5 -> 0 -> 1

Max Number: 85                                              */




#include <stdio.h>

int main() {
    int n, maxNum;
    scanf("%d", &n);
    maxNum = n;
    while(n != 1){
        printf("%d -> ", n);
        if(n < 1){
            n = 1;
        }
        else if(n % 3 == 0 && n != 0){
            n /= 3;
        }
        else if(n % 5 == 0 && n != 0){
            n -= 5;
        }
        else{
            n *= 5;
        }
        if(maxNum <= n){
            maxNum = n;
        }
    }
    printf("1\n");
    printf("Max Number: %d", maxNum);
    return 0;
}

