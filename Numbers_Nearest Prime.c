/*  You are given an integer N. Your task is to find the nearest prime number to N.

If N itself is prime, return N.
If there are two prime numbers at the same minimum distance from N, return the smaller one.
Input Format

A single integer N
Constraints

1 ≤ N ≤ 10^6
Output Format

Print the nearest prime number to N.
Sample Input 0

13
Sample Output 0

13
Sample Input 1

8
Sample Output 1

7                                */

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int glag=1;
    int num1=n-1;
    int num2=n+1;
    if(n==1){
        printf("2");
        return 0;
    }
   
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            glag=0;
            break;
        }
    }
    if(glag==1){
        printf("%d",n);
       return 0;
    }
    
    
  while(num1<n){
  int flag=1;
      for(int i=2;i*i<=num1;i++){
          if(num1%i==0){
              flag=0;
              break;
          }
      }
      if(flag==1){
          break;
      }
      num1--;
  }
 
    // write something
    while(num2>n){
        int true=1;
      for(int i=2;i*i<=num2;i++){
         if(num2%i==0){
            true=0;
             break;
         }  
      }
        if(true==1){
            break;
        }
        num2++;
        
    }
    
    // write something
    
    int x=n-num1;
    int y=num2-n;
    if(y>x ||(x-y==0)){
        printf("%d",num1);
    }
    else if((y<x))
    {
        printf("%d",num2);
        }
        
    
    
    return 0;
}