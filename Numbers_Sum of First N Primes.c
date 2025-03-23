/*   Given an integer N, calculate the sum of the first N prime numbers.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^4
Output Format

Print a single integer representing the sum of the first N prime numbers.
Sample Input 0

4
Sample Output 0

17
Sample Input 1

5
Sample Output 1

28            */




#include <stdio.h>

int main() {

    int n;
    int num=2;
    int sum=0;
    scanf("%d",&n);
    int count=0;
    
    while(count<n){
        int flag=1;
     for(int i=2;i*i<=num;i++){
          if(num%i==0){
            flag=0;
              break;
        } 
     }
        if(flag==1)
         {
             count++;
            sum+=num;
               // num++;
               
         }
         num++;
        
         
    }
    printf("%d",sum);
    return 0;
}