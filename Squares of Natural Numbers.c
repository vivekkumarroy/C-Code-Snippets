/*   Write a program to print the squares of numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single integer n representing representing the range limit.
Constraints

0 <= N <= 10^4
Output Format

Print all squares of numbers from 1 to N (inclusive), separated by a space.

Sample Input 0
5

Sample Output 0
1 4 9 16 25 

Sample Input 1
12

Sample Output 1
1 4 9 16 25 36 49 64 81 100 121 144   */




    #include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i*i);
    }
    return 0;
}
