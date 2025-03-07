/*  Write a program to print a symmetrical "X" shape for a given integer n, where n represents the number of rows and columns in the square grid.

The pattern follows these rules:

The pattern has n rows and n columns.
Asterisks (*) are placed along the two diagonals:
The main diagonal (from the top-left to the bottom-right).
The anti-diagonal (from the top-right to the bottom-left).
All other positions in the grid are filled with spaces.
Note:

If the input n is even, convert it the next odd number, to print the shape.
Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the shape cannot be drawn by the given input value.
Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 50
Output Format

Print the "X" shape as described.
Print "Shape Not Possible" if the shape cannot be drawn.
Sample Input 0

5

Sample Output 0

*   *
 * * 
  *  
 * * 
*   *
Sample Input 1

0

Sample Output 1

Shape Not Possible

Sample Input 2

6

Sample Output 2

*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     *                                              */




#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
        if(n%2==1) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i||j==n-i+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
        }
        else{
            for(int i=1;i<=n+1;i++){
        for(int j=1;j<=n+1;j++){
            if(j==i||j==n-i+2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
        }
     }  
        
        
    else{
        printf("Shape Not Possible");
    }
    
    return 0;
}