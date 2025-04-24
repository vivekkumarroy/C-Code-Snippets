/*  A Spy Number is a number where the sum of its digits equals the product of its digits.

Write a function is_spy_number(n) that returns 1 if the number n is a Spy Number and 0 otherwise.

Function Signature

int is_spy_number(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^6
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Spy Number, otherwise return 0.
Sample Input 0

123
Sample Output 0

1
Explanation 0

1+2+3 = 6
1×2×3 = 6
Since sum of digits = product of digits (6 == 6), 123 is a Spy Number.
Sample Input 1

112
Sample Output 1

0
Explanation 1

1+1+2 = 4
1×1×2 = 2
Since sum of digits ≠ product of digits (4 ≠ 2), 112 is not a Spy Number.  */




#include <stdio.h>

int is_spy_number(int n) {
    // Your code here to calculate sum and product of digits
    int sum=0;
    int pro=1;
    while(n>0){
        int rem=n%10;
        n/=10;
        sum=sum+rem;
        pro=pro*rem;
    }
    if(sum==pro){
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); \
    printf("%d\n", is_spy_number(n));
    return 0;
}