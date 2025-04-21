/* Aakash is fascinated by numbers and how they transform under various operations. He discovered an interesting operation called Rotating Digits and wants to write a function to process numbers accordingly.

Rotating Digits has two operatons:

Right Rotation: It is performed by shifting the digit in the one's place to the leftmost and shifting all other digits right by 1 unit.
Left Rotation: It is performed by shifting the leftmost digit to one's place and shifting all other digits left by 1 unit.
image

A number is transformed based on the following rules:

If the number has three or more digits and is a palindrome or a prime, follow these special rules:

If it is a palindrome, rotate its digits right by two positions.
If it is a prime, rotate its digits left by two positions.
If it is both prime and a palindrome, keep it unchanged.
Otherwise:

If the number is even, rotate its digits right by one position.
If the number is odd, rotate its digits left by one position.
Write a program to perform the following operation on the given number N.

Note: Each testcase contains multiple inputs as numbers.

Input Format

The first line contains the number of inputs as t.
Next t lines consists of one interger N which represents the number.
Constraints

1 <= t <= 100
1 <= N <= 106
Output Format

For given t inputs, output the resultant number based on conditions, on a separate line.
Sample Input 0

3
121
45
44
Sample Output 0

211
54
44
Explanation 0

121: It has 3 digits, is a palindrome but not prime, so it is rotated right by 2, changing 121 → 112 → 211, hence the output is 211.

45: It is a 2-digit odd number, so it is rotated left by 1, changing 45 → 54, hence the output is 54.

44: It is a 2-digit even number, so it is rotated right by 1, but since both digits are the same, it remains 44, hence the output is 44.

Sample Input 1

5
68
85
1221
9973
9999
Sample Output 1

86
58
2112
7399
9999
Explanation 1

68: It is a 2-digit even number, so it is rotated right by 1, changing 68 → 86, hence the output is 86.

85: It is a 2-digit odd number, so it is rotated left by 1, changing 85 → 58, hence the output is 58.

1221: It has 4 digits, is a palindrome but not prime, so it is rotated right by 2, changing 1221 → 1122 → 2112, hence the output is 2112.

9973: It has 4 digits, is a prime but not a palindrome, so it is rotated left by 2, changing 9973 → 9739 → 7399, hence the output is 7399.

9999: It has 4 digits, is both a palindrome and a prime, so it remains unchanged, hence the output is 9999.    */





#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ispal(int n) {
    int r = 0, t = n;
    while (t > 0) {
        r = r * 10 + t % 10;
        t /= 10;
    }
    return r == n;
}

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int count(int n) {
    int c = 0;
    while (n > 0) {
        c++;
        n /= 10;
    }
    return c;
}

int power10(int p) {
    int r = 1;
    while (p--) r *= 10;
    return r;
}

int rotate_right(int n, int k) {
    int d = count(n);
    k = k % d;
    if (k == 0) return n;
    int p = power10(k);
    int last = n % p;
    n = n / p;
    int m = power10(d - k);
    return last * m + n;
}

int rotate_left(int n, int k) {
    int d = count(n);
    k = k % d;
    if (k == 0) return n;
    int p = power10(d - k);
    int first = n / p;
    int rem = n % p;
    int m = power10(k);
    return rem * m + first;
}

int solve(int n) {
    int d = count(n);
    if (d >= 3) {
        bool p1 = ispal(n);
        bool p2 = isprime(n);
        if (p1 && p2) return n;
        if (p1) return rotate_right(n, 2);
        if (p2) return rotate_left(n, 2);
    }
    if (n % 2 == 0) return rotate_right(n, 1);
    return rotate_left(n, 1);
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", solve(n));
    }
    return 0;
}
