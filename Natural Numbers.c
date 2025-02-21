/*   Write a program that takes a positive integer N as input from the user and prints all natural numbers from 1 to N, with each number followed by a space (including the last number).

Input Format

A single positive integer, N, representing the range limit.

Constraints

0 <= N <= 10^6

Output Format

Print all natural numbers from 1 to N, separated by a space.

Sample Input 0
5

Sample Output 0
1 2 3 4 5 

Sample Input 1
10

Sample Output 1
1 2 3 4 5 6 7 8 9 10    */




#include <stdio.h>

int main() {
int n;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}