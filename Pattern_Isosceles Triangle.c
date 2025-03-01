/* Write a program to print an isosceles triangle pattern based on the number of rows n provided by the user.

The pattern has the following properties:

The triangle consists of n rows.
Each row contains spaces followed by asterisks (*), forming a centered isosceles triangle.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the triangle cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 50
Output Format

Print the isosceles triangle pattern consisting on n rows.
Print "Shape Not Possible" if the triangle cannot be drawn.
Sample Input 0

3
Sample Output 0
  *
 ***
*****

Sample Input 1
1

Sample Output 1
Shape Not Possible       */



#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1){
        
   
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
      printf("\n");  
    }
     
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}