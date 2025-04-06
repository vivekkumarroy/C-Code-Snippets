/*   A Harshad Number is a number that is divisible by the sum of its digits.

Compute the sum of the digits of the number.
If the number is divisible by this sum, it is a Harshad Number.
Otherwise, it is not a Harshad Number.
Input Format

A single integer 𝑁.

Constraints

1 <= N <= 106

Output Format

Print,"[N] is a harshad number" if N is a Harshad number.
Print, "[N] is not a harshad number" otherwise.
Sample Input 0

4077
Sample Output 0

4077 is not a harshad number
Sample Input 1

5833
Sample Output 1

5833 is a harshad number
Explanation 1

5 + 8 + 3 + 3 = 19
5833 is divisible by 19.       */




#include <stdio.h>


int main() {

   int n;
    int rem;
    int sum=0;
    scanf("%d",&n);
    int real=n;
    while(n>0){
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    if(real%sum==0){
        printf("%d is a harshad number",real);
    }
    else{
         printf("%d is not a harshad number",real);
    }
    return 0;
}
