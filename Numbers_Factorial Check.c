/* Given an integer N, determine whether it is equal to the factorial of some non-negative integer x (i.e., N=x! for some x ≥ 0). If yes, print that number whose factorial is equal to N, otherwise print "NO".

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^19
Output Format

Print the integer x if N=x!, otherwise, print "NO".
Sample Input 0

120

Sample Output 0

5

Sample Input 1

150

Sample Output 1

NO                */





#include <stdio.h>

int main() {

       long int n;
   // long int product=1;
    scanf("%ld",&n);
       int i=2;
    
    while(n!=0){
        if(n%i==0){
            
            n/=i;
        i++;
        }
        else{
            break;
        }
    }
    if(n==1){
        printf("%d",(i-1));
    }
    else{
        printf("NO");
    }
    
          
    return 0;
}


