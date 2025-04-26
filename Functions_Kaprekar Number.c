/*  A Kaprekar Number is a number whose square can be split into two parts that sum up to the original number.

Write a function is_kaprekar(n) that returns 1 if the given number n is a Kaprekar number, otherwise returns 0.

Function Signature

int is_kaprekar(int n);
Splitting Rule

Compute S=N^2 (square of N).
Determine the number of digits in N (let's call it d).
Split S into two parts:
Right part: The last d digits of S.
Left part: The remaining digits of S (if any).
If (left part + right part) = N, then N is a Kaprekar number.
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^5
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Kaprekar number, otherwise return 0.
Sample Input 0

297
Sample Output 0

1
Explanation 0

297^2 = 88209
Right part: last 3 digits → 209
Left part: remaining digits → 88
88 + 209 = 297
297 is a Kaprekar number.
Sample Input 1

50
Sample Output 1

0
Explanation 1

50^2 =2500
25 + 00 = 25
25 != 50
50 is not a Kaprekar number.   */





#include <stdio.h>
#include<math.h>

int is_kaprekar(int n) {
    // Implement logic here
    int count =0;
    int s=n*n;
    int rem=0;
    int real=n;
    while(n>0){
        n/=10;
        count++;
    }
    
     int divisor=pow(10,count);
     int divident =s/divisor;
      rem = s%divisor;
    
    if((rem + divident)==real){
        return 1;
    }
    else{
        return 0;
    }
    
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}