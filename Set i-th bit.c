/*  Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.

Input Format

The first line contains an integer n.
The second line contains an integer i.
Constraints

-10^9 ≤ n ≤ 10^9
0 ≤ i ≤ 31
Output Format

Print the updated value of n after setting the i-th bit.

Sample Input 0
10
3

Sample Output 0
10

Sample Input 1
5
1

Sample Output 1
7                       */


#include <stdio.h>

int main() {
int n,i;
    scanf("%d %d ",&n,&i);
   int x=(n|(1<<i));
    printf("%d",x);
       
    return 0;
}