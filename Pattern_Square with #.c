/*   Write a program to print a square pattern based on an integer input n. The pattern should consist of asterisks (*) and hash symbols (#) arranged as follows:

The first and last rows of the square are completely filled with asterisks (*).
The intermediate rows have asterisks (*) at the boundaries and hash symbols (#) filling the inner spaces.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the square cannot be drawn having (#) within it.

Input Format

A single integer n.
Constraints

-50 <= n <= 50
Output Format

A square pattern, for n=5, as described below:
*****
*###*
*###*
*###*
*****
Print "Shape Not Possible" if the sandglass cannot be drawn.

Sample Input 0
5

Sample Output 0
*****
*###*
*###*
*###*
*****
Sample Input 1
1

Sample Output 1
Shape Not Possible    */




#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>2){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1||i==n||j==1||j==n){
                    printf("*");
                }
                else{
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    else {
        printf("Shape Not Possible");
    }
    return 0;
}