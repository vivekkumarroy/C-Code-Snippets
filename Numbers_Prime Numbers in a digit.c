/*  Write a program to count the nuber of digits of a given number N that are prime.

Input Format

A single integer N
Constraints

−10^18 ≤ N ≤ 10^18
Output Format

Print a single integer representing the count of prime digits in N.
Sample Input 0

128
Sample Output 0

1
Sample Input 1

406379
Sample Output 1

2                            */






#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld",&n);
    int sum=0;
    int rem=0;
    // long long int real=n;
    if(n<0){
        n=-n;
    }
    while(n>0){
        int flag=1;
        rem=n%10;
        n=n/10;
        if(rem>1){
        for(int i=2;i*i<=rem;i++){
            if(rem%i==0){
               flag=0;
                break;
            }
            
        }
        if(flag==1){
            sum+=1;
        }     
     }
        else{
            continue;
        }
    }   
    printf("%d",sum);
    return 0;
}