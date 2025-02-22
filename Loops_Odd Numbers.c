/*  Write a program to print all odd numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single positive integer, N, representing the range limit.
Constraints

0 <= N <= 10^6
Output Format

Print all odd numbers from 1 to N (inclusive), separated by a space.

Sample Input 0
20

Sample Output 0
1 3 5 7 9 11 13 15 17 19

Sample Input 1
51

Sample Output 1
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51   */






#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        printf("%d ",i);
    }
    return 0;
}