/*  Write a program to generate a symmetrical pyramid pattern with n rows based on the following rules:

The pattern consists of n rows.
Each row contains a sequence of numbers that increases symmetrically outward from 0 at the center.
For a specific row:
The numbers start with a number and decrease to 0.
Then, they increase again symmetrically from 1 to the end.
The pattern is centered with spaces to form a symmetrical pyramid.
For a given integer n, print the pattern as described.

Input Format

A single integer n.
Constraints

1 ≤ n ≤ 50
Output Format

n lines, where each line contains numbers separated by a space.
Sample Input 0

5
Sample Output 0

    0
   101
  21012
 3210123
432101234
Sample Input 1

10
Sample Output 1

         0
        101
       21012
      3210123
     432101234
    54321012345
   6543210123456
  765432101234567
 87654321012345678
9876543210123456789         */





#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=i-1;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            
            if(j<=i){
                printf("%d",x--);
            }
            else{
                printf("%d",++x+1);
            }
     }
        printf("\n");
    }
    return 0;
}





