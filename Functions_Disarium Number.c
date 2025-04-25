/*  A Disarium number is a number where the sum of its digits powered by their position (starting from the leftmost digit, with the first position as 1) equals the number itself.

Write a function is_disarium_number(n) that returns 1 if the number n is a Disarium number and 0 otherwise.

Function Signature

int is_disarium_number(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^6
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Disarium number, otherwise return 0.
Sample Input 0

89
Sample Output 0

1
Explanation 0

8^1 = 8
9^2 = 81
The sum is: 8 + 81 = 89, which matches the original number.
Since the sum equals the number, 89 is a Disarium number.

Sample Input 1

123
Sample Output 1

0
Explanation 1

1^1 = 1
2^2 = 4
3^3 = 27
The sum is: 1 + 4 + 27 = 32, which does not match the original number (123).
Since the sum does not equal the number, 123 is not a Disarium number.        */





#include <stdio.h>
#include<math.h>

int is_disarium_number(int n) {
    // Implement this function
    int real=n;
    int count=0;
    int sum=0;
    int real2=n;
    while(n>0){
        n/=10;
        count ++;
    }
    
        while(real>0){
        int rem=real%10;
        sum+= pow( rem ,count);
            count--;
        real/=10;
           
    }
    if(real2==sum){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}