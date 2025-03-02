/* Write a program to print a double-sided pyramid pattern based on an integer input n. Each row of the pyramid should contain left-aligned and right-aligned patterns of asterisks separated by two spaces.

Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the double-sided pyramid cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 50
Output Format

Print the double-sided pyramid pattern consisting on n rows.
Print "Shape Not Possible" if the pattern cannot be drawn.
Sample Input 0

5
Sample Output 0
    *  *
   **  **
  ***  ***
 ****  ****
*****  *****

Sample Input 1

1
Sample Output 1

Shape Not Possible        */




#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i;j++){
            
            printf("*");
            if(i==j){
                printf("  ");
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