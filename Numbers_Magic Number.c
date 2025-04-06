/*  A number is considered a Magic Number if the repeated sum of its digits eventually results in 1.

To determine if a number is a Magic number:

Calculate the sum of its digits.
If the result is a number with more than one digit, repeat the process until you are left with a single digit.
If the final single digit is 1, the number is a Magic number; otherwise, it is not.
Input Format

A single integer N
Constraints

0 ≤ N ≤ 10^6
Output Format

Print "[N] is a magic number" if N is a Magic number".
Print "[N] is not a magic number" otherwise".
Sample Input 0

1234
Sample Output 0

1234 is a magic number
Explanation 0

1234 → 1 + 2 + 3 + 4 = 10 → 1 + 0 = 1 (Magic number).
Sample Input 1

987
Sample Output 1

987 is not a magic number
Explanation 1

987 → 9 + 8 + 7 = 24 → 2 + 4 = 6 (Not a magic number).      */

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d", &n);
    int real = n;
    while (n >= 10) {  
       int sum = 0;  
        while (n > 0) {
            sum += n % 10;  
            n /= 10;         
        }
        n = sum; 
    }
    if (n == 1) {
        printf("%d is a magic number\n", real);
    } else {
        printf("%d is not a magic number\n", real);
    }

    return 0;
}
                    