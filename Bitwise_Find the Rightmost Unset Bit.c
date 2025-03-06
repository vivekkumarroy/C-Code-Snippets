/*  Given a positive integer n, determine the position of the rightmost unset bit (1-based positioning).

If all bits in n are set (i.e., there are no unset bits), output -1.

Input Format

A single integer n.

Constraints

-2^31 <= n < 2^31
Output Format

Print the position of the rightmost unset bit as integer.

Sample Input 0

1

Sample Output 0

2

Explanation 0

Binary representation of 1 is 1 . The rightmost unset bit is at position 2 .

Sample Input 1

-1

Sample Output 1

-1

Explanation 1

Binary representation of -1 (2’s complement) is 111…111 . All bits are set, so the output is -1 . */




#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    if(n!=-1){
        
    
    for(int i=0;i<=31;){
        
        if((n&(1 <<i ))==0){
            printf("%d",i+1);
            break;
        }
        else{
            i++;
        }
    }
    }
    else{
        printf("-1");
    }
    return 0;
}