/* Write a program to find the sum of prime factors of a given integer.

It is guaranteed that every positive integer can be written as a product of its prime factors. A prime factor is itself a prime number; multiplying all the prime factors of a number should yield the number itself.

Input Format

A single integer N.
Constraints

2 ≤ N ≤ 10^6
Output Format

Sum of prime factors of N.
Sample Input 0

40
Sample Output 0

11
Explanation 0

40 = 2x2x2x5, So 2+2+2+5 = 11

Sample Input 1

60
 
Sample Output 1

12    */



#include <stdio.h>

int main() {

   int n;
    int sum=0;
    scanf("%d",&n);
        for(int i=2;i<=n;i++){ 
            while(n%i==0){
                     n=n/i;
                sum+=i;
            }
        }
    printf("%d",sum);
    return 0;
}