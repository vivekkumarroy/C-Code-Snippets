/*  A number N is called a Supreme Prime if:

N is a prime number.
The sum of its digits is also a prime number.
Given an integer N, write a program to determine whether it is a Supreme Prime or not.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

Print "YES" if N is a Supreme Prime, otherwise print "NO".
Sample Input 0

23
Sample Output 0

YES
Sample Input 1

19
Sample Output 1

NO                                           */






#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int rem;
    int sum=0;
    int flag1=1;
    int flag2=1;
    int real=n;
    if(n==1){
        printf("NO");
        return 0;
    }
    while(n>0){
        rem=n%10;
        n/=10;
        sum+=rem;
    }
     for(int i=2;i*i<=real;i++){
       if(real%i==0){
           printf("NO");
           flag2=0;
           break;
       }
   }
    if(flag2==1){
        for(int i=2;i*i<=sum;i++){
       if(sum%i==0){
           printf("NO");
           flag1=0;
           break;
       }
   }
    if(flag1==1){
        printf("YES");
    }
}
    return 0;
}