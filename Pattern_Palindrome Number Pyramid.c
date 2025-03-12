/*  Write a program to print a pyramid pattern with numbers based on the input size n, where n represents the total number of rows of the pattern.

The pattern consists:

Each row starts with spaces for alignment, followed by an increasing sequence of numbers and then a decreasing sequence.
The rows are symmetrically aligned, forming a pyramid-like pattern.
Input Format

A single integer n.
Constraints

1 ≤ n ≤ 50
Output Format

Print the pattern as described above, where each row of the pattern is printed on a new line.
Sample Input 0

5
Sample Output 0

    1
   121
  12321
 1234321
123454321

Sample Input 1

3

Sample Output 1

  1
 121
12321                          */





#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=1;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j<=(2*i)/2){
                printf("%d",x++);
            }
            
            else{
                printf("%d",--x-1);
            }
            
        }
        printf("\n");
    }
    return 0;
}