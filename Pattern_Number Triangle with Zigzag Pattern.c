/*   Write a program to generate a number pattern based on the following rules:

The pattern consists of n rows.
Numbers alternate between being printed from the smallest available number (start) and the largest available number (end), for each column.
For odd columns, print numbers from start (increasing order).
For even columns, print numbers from end (decreasing order).
For a given integer n, print the pattern as described.

Input Format

A single integer n.
Constraints

1 ≤ n ≤ 50
Output Format

n lines, where each line contains numbers separated by a space.
Sample Input 0

6
Sample Output 0

1 
2 11 
3 10 12 
4 9 13 18 
5 8 14 17 19 
6 7 15 16 20 21

Sample Input 1

11
Sample Output 1

1 
2 21 
3 20 22 
4 19 23 38 
5 18 24 37 39 
6 17 25 36 40 51 
7 16 26 35 41 50 52 
8 15 27 34 42 49 53 60 
9 14 28 33 43 48 54 59 61 
10 13 29 32 44 47 55 58 62 65 
11 12 30 31 45 46 56 57 63 64 66             */




#include <stdio.h>

int main() {

    int  n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int x=i;
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            if(j%2!=0){
            x=x+2*(n-i)+1;
            }
            else{
                x=x+2*(i-j);
                     
                }  
            }
        printf("\n");
    }
    return 0;
}