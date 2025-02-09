/*   Write a program to swap two integers using only the bitwise XOR operator without using a temporary variable.

The program should take two integers, A and B, as input and output the swapped values.

Input Format

The first line contains an integer A
The second line contains an integer B
Constraints

(-10^5 ≤ A ≤ 10^5)
(-10^5 ≤ B ≤ 10^5)
Output Format

The first line contains the swapped value of A.
The second line contains the swapped value of B.
Sample Input 0

5
10
Sample Output 0

10
5
Sample Input 1

-7
14
Sample Output 1

14
-7        */


#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int x=a^b;
    int y=x^a;
    int z=x^b;
    printf("%d\n",y);
    printf("%d\n",z);
    return 0;
}                           