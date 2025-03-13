/*    Write a program to generate a number pattern based on the following rules:

The pattern consists of n rows.
The numbers alternate between starting with 1 and 2 for each row.
Odd-numbered rows (1st, 3rd, etc.) start with 1 and continue with odd numbers.
Even-numbered rows (2nd, 4th, etc.) start with 2 and continue with even numbers.
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

1 
2 4 
1 3 5 
2 4 6 8 
1 3 5 7 9 

Sample Input 1

3
Sample Output 1

1 
2 4 
1 3 5           */




#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int x=1;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
            printf("%d ",x);
            x+=2;
    }
            else{
                printf("%d ",++x);
                x+=1;
            }
        }
        printf("\n");
    }
    return 0;
}