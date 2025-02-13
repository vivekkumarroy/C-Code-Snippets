/*   Given an integer n and a position i, your task is to write a program to extract the value of the i-th bit of n. The i-th bit is counted from the right, starting at position 0 (0-based indexing). Return 1 if the bit is set, otherwise return 0.

Input Format

A single integer n representing the number.
A single integer i representing the bit position to extract.
Constraints

-2^31 ≤ n ≤ 2^31
0 ≤ i ≤ 31
Output Format

Output a single integer, which is the value of the i-th bit of n (either 0 or 1)

Sample Input 0
21 2

Sample Output 0
1

Sample Input 1
0 5

Sample Output 1
0                       */






    #include <stdio.h>

int main() {

    int n,i;
    scanf("%d %d",&n,&i);
    n = (n>>i&1);
        if(n==1){
            printf("1");
        }
    else if(n==0){
        printf("0");
    }
    return 0;
}    
 