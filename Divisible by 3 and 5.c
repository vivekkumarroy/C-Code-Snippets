/* Write a program that prints all the numbers between 1 and 100 (inclusive) that are divisible by both 3 and 5.

Input Format

N/A

Constraints

N/A

Output Format

Print all the numbers between 1 and 100 (inclusive) that are divisible by both 3 and 5, each number in a new line.   */


#include <stdio.h>

int main() {

    int n=100;
    
    for(int i=15;i<=n;i+=15)
    {
        printf("%d\n",i);
    }
    return 0;
}