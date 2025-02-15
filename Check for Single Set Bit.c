/*       An integer n is said to have exactly one set bit if its binary representation contains only a single 1. Write a program to check:

If n has exactly one set bit, return 1.
If n has more than one set bit or n is non-positive, return -1.
Input Format

A single integer n.

Constraints

−10^9 ≤ n ≤ 10^9

Output Format

Output 1 if n has exactly one set bit in its binary representation.
Output -1 if n has more than one set bit or is non-positive.

Sample Input 0
1

Sample Output 0
1

Sample Input 1
16

Sample Output 1
1                      */





    #include <stdio.h>

int main() {

    int n,r;
    scanf("%d",&n);
    r=(n-1)&n;
    if(n==0){
        printf("-1");
    }
    else if(r==0 ){
        printf("1");
    }
    else{
       printf("-1"); 
    }
    return 0;
}   
    