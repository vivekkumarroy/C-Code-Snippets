/*  Write a program that takes an integer input N and prints its factors in descending order, but skips every alternate factor.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

Print factors of N in descending order, skipping every alternate factor, separated by spaces and ending with a full-stop(.)

Sample Input 0
12

Sample Output 0
12 4 2.

Sample Input 1
25

Sample Output 1
25 1.              */





#include <stdio.h>

int main() {

   int n;
    int count=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        if(n%i==0){
            if(count%2!=0){
                if(count>1){
                    printf(" ");
                }
                printf("%d",i);
            }
            count++;
        }
        
    }
    printf(".");
    
    return 0;
}