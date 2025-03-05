/* Write a program to extract the position of the rightmost set bit of a given integer n. If no set bit exists, the program should print 0.

Note: Start the position from 1

Input Format

A single integer n.
Constraints

-2^31 ≤ n < 2^31
Output Format

An integer indicating the position of the rightmost set bit in n
Sample Input 0

18

Sample Output 0

2

Sample Input 1

16

Sample Output 1

5                  */


#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n!=0){
        
    
    for(int i=0;i<=31;){
        int x=(n>>i)&1;
        if(x==1){
            printf("%d",i+1);
            break;
        }
        else{
            i++;
        }
    }
  }
    else{
        printf("0");
    }
        
    return 0;
}