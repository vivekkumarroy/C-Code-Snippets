/* Given an integer N, print all cyclic rotations of the number N. A cyclic rotation involves shifting the digit in the one's place to the leftmost, and moving all other digits one place to the right. The rotations continue until the original number is reached again.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^9
Output Format

Print all cyclic rotations of N, one per line, in the order they are obtained by shifting the digit in the one's place to the left. The process stops when the number returns to its original configuration.
Sample Input 0

1234
Sample Output 0

4123
3412
2341
1234
Sample Input 1

100
Sample Output 1

10
1
100
Sample Input 2

1221
Sample Output 2

1122
2112
2211
1221          */




#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int num=n;
    int count=0;
    int rem;
    // int quit;
    
    while(n>0){
      
        n/=10;
        count++;
    }
    
    for(int i=1;i<=count;i++){
        int multi=1;
        
        rem=num%10;
        
        num=num/10;
        
        for(int j=1;j<=count-1;j++){
            
            multi=multi*10;
        }
        
        int res=rem*multi+num;
        
         printf("%d\n",res);
        
        num=res;
    } 
    
    return 0;
}