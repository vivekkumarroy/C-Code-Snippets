/*   Given two integers L and R, count the number of prime numbers in the range [L, R] (inclusive) and print all the prime numbers in this range.

Input Format

The first and only line contains two integers L and R.
Constraints

1 ≤ L ≤ R ≤ 10^6
Output Format

Print the output in two lines:
Print all the prime numbers in ascending order, separated by spaces.
Print the count of prime numbers in the range [L, R].
Sample Input 0

10 20

Sample Output 0

11 13 17 19
4

Sample Input 1

90 96

Sample Output 1

0  */





#include <stdio.h>

int main() {
    int n,m;
    int count=0;
    
    scanf("%d %d",&n,&m);
       if(m<2){
        printf("0");
           return 0; 
    } 
    else if(n==0){
        n=2;
    }
    else if(n==1){
        n=2;
    }
    int realn=n;
    int realm=m;
    
    while(n<=m){
        int flag=1;
        
            for(int i=2;i<=n-1;i++){
                if(n%i==0){
                   flag=0;
                   break;
                }
            }
            if(flag==1){
  
              ++count;   
            }
            
            n++;
    }
    printf("%d\n",count);
    
    
    while(realn<=realm){
        int flag=1;
        
            for(int i=2;i<=realn-1;i++){
                if(realn%i==0){
                   flag=0;
                   break;
                }
            }
            if(flag==1){
               printf("%d ",realn);
              ++count;   
            }
            
            realn++;
    }    
    return 0;
}