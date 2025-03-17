/*  Given an integer n, write a program to calculate the n-th prime number, starting from 1.

Input Format

A single integer 𝑛.
Constraints

1 <= n <=104
Output Format

Print the n-th prime number.
Sample Input 0

6
Sample Output 0

13
Explanation 0

13 is the 6th prime number.

Sample Input 1

12

Sample Output 1

37                 */



#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, position = 0, number = 2;
    scanf("%d", &n);
    while (position < n) {
        bool isPrime = true;
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            position++;
        }
        if (position == n) {
            printf("%d\n", number);
            return 0;
        }
        number++;
    }
    return 0;
}