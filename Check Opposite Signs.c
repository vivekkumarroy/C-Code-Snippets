/*   Write a program to determine if two integers a and b have opposite signs using bitwise operators.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print "Yes" if a and b have opposite signs.
Print "No" otherwise

Sample Input 0
-5 6

Sample Output 0
Yes

Sample Input 1
7 3

Sample Output 1
No                    */



#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int x=((a>>31)&1);
    int y=((b>>31)&1);
    if(x==0&&y==0){
        printf("No");
    }
    else if((x==0&&y!=0)||(x!=0&&y==0)) {
          printf("Yes"); 
        }
            else {
                printf("No");
            }
    return 0;
}