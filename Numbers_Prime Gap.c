/*   Given an integer N, write a program to find:

The smallest prime P1 that is strictly greater than N.
The largest prime P2 that is strictly smaller than N.
Then, return the absolute difference |P1 - P2|.

Note: If P1 or P2 does not exist, consider it as 0.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

A single integer representing the absolute difference between P1 and P2.
Sample Input 0

10
Sample Output 0

4
Sample Input 1

17
Sample Output 1

6                               */





#include <stdio.h>

int main() {

    int n;  
    scanf("%d",&n);
    int num=n-1;
    int mun=n+1;
    int p1;
    int p2;
    if(n==2){
        p1=0;
        p2=3;
            
        printf("%d",(p2-p1));
        return 0;
    }
    if(n==1){
         p1=0;
        p2=2;
            
        printf("%d",(p2-p1));
     return 0;
    }
   while(num<n){
   int flag=1;
       for(int i=2;i*i<=num;i++){
           if(num%i==0){
               flag=0;
               break;
           }
       }
       if(flag==1){
           break;
       }
       num--;
   }
     p1=num;
    // printf("%d",p1);
    while(mun>n){
        int true=1;
       for(int i=2;i*i<=mun;i++){
         if(mun%i==0){
            true=0;
             break;
         }  
       }
        if(true==1){
            break;
        }
        mun++;
        
    }
     p2=mun;
    
    printf("%d",(p2-p1));
    
    return 0;
}    