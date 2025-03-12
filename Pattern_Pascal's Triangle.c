/*   Write a program to print Pascal's Triangle with numbers based on the input size n, where n represents the total number of rows of the pattern.

Pascal's Triangle is a triangular array of numbers where each entry is the sum of the two entries directly above it, as shown below.

image

The first row of Pascal's Triangle starts with the number 1. For a given integer n, print the first n rows of Pascal's Triangle. The numbers in each row should be separated by a space, and the rows should be center-aligned based on the maximum width.

Input Format

A single integer n
Constraints

1 ≤ n ≤ 30
Output Format

n lines, where each line represents a row of Pascal's Triangle, center-aligned with respect to the maximum width.
Sample Input 0

6

Sample Output 0

     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
1 5 10 10 5 1


Sample Input 1

3

Sample Output 1

  1 
 1 1 
1 2 1          */



#include <stdio.h>

int main() {

   int n;
    
     
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
          int num1=1;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){

                printf("%d ",num1);
                num1=num1*(i-j)/j;
   
            }
           
        printf("\n");
    }
    return 0;
}