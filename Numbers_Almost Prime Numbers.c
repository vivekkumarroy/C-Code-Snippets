/* A number is called "almost prime" if it has exactly two prime factors (not necessarily distinct).

Given an integer N, count how many numbers from 1 to N (inclusive) are almost prime.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

Print a single integer representing the count of almost prime numbers from 1 to N.
Sample Input 0

10
Sample Output 0

4
Explanation 0

The almost prime numbers between 1 and 10 are:

4 → (2 × 2)
6 → (2 × 3)
9 → (3 × 3)
10 → (2 × 5)
Total count = 4

Sample Input 1

20
Sample Output 1

6
Explanation 1

The almost prime numbers between 1 and 20 are:

4 → (2 × 2)
6 → (2 × 3)
9 → (3 × 3)
10 → (2 × 5)
14 → (2 × 7)
15 → (3 × 5)
Total count = 6               */



#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 4; i <= n; i++) {  
        int num = i, num_prime = 0;

        for (int j = 2; j * j <= num; j++) {  
            while (num % j == 0) {  
                num_prime++;
                num /= j;  
            }
        }
        if(num > 1){
            num_prime++;
        }
        if (num_prime == 2) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}