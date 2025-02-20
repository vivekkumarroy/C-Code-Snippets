/*   Write a program to determine whether two given integers a and b are complementary.

Two numbers are complementary if every bit in a is the opposite of the corresponding bit in b.

Input Format

Two integers, a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print "YES" if the two numbers are complementary, otherwise print "NO".

Sample Input 0
5 -6

Sample Output 0
YES

Sample Input 1
10 20

Sample Output 1
NO                */




#include <stdio.h>

int main() {
int a,b;
    scanf("%d %d",&a,&b);
    int x=a^b;
    x=(x^(~1));
    if(x==1){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}