/*  Write a program to generate a triangular number pattern with n rows based on the following rules:

The pattern starts with the number 1 in the first row.
Each subsequent row contains numbers in reverse order, starting from the next number in the sequence.
The number of elements in each row decreases sequentially.
The pattern continues for n rows.
For a given integer n, print the pattern as described.

Input Format

A single integer n.
Constraints

1 ≤ n ≤ 50
Output Format

n lines, where each line contains numbers separated by a space.
Sample Input 0

4
Sample Output 0

1 
3 2 
6 5 4 
10 9 8 7 
Sample Input 1

15
Sample Output 1

1 
3 2 
6 5 4 
10 9 8 7 
15 14 13 12 11 
21 20 19 18 17 16 
28 27 26 25 24 23 22 
36 35 34 33 32 31 30 29 
45 44 43 42 41 40 39 38 37 
55 54 53 52 51 50 49 48 47 46 
66 65 64 63 62 61 60 59 58 57 56 
78 77 76 75 74 73 72 71 70 69 68 67 
91 90 89 88 87 86 85 84 83 82 81 80 79 
105 104 103 102 101 100 99 98 97 96 95 94 93 92 
120 119 118 117 116 115 114 113 112 111 110 109 108 107 106     */ 





#include <stdio.h>

int main() {

     int n;
    int x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         x=2*i+x-1;
        for(int j=1;j<=i;j++){
            printf("%d ",x--);
              
            }
        
        printf("\n");
    }
    return 0;
}
                                                                               