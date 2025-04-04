/*  Aditi is fascinated by special numbers and has learned about Armstrong numbers. She wants to quickly check if a given number is an Armstrong number or not. Write a program to help Aditi to determine if a number is an Armstrong number.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Input Format

A single integer n.
Constraints

1 <= n <= 10^9
Output Format

Print "YES" if the number is an Armstrong number, otherwise "NO".
Sample Input 0

153
Sample Output 0

YES
Explanation 0

153 is a 3-digit number.
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.
Since the sum of the cubes of its digits equals the number itself, 153 is an Armstrong number.
Sample Input 1

123
Sample Output 1

NO
Explanation 1

123 is a 3-digit number.
1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36.
Since the sum of the cubes of its digits does not equal 123, it is not an Armstrong number.  */






#include <stdio.h>

int main() { 
  long  int n;
    scanf("%ld",&n);
  long int num=n,n1=n;
    int count=0,rem=0;
    long int sum=0;
    
    
    while(num!=0){
       num= num/10;
        count++;
    }
    
  for(int i=1;i<=count;++i){
       rem= n1%10;
       n1=n1/10;
       int pro=1;
      
       for(int j=1;j<=count;++j){
          
          pro=pro*rem;
           
       }
      sum=sum+pro;
   }
    if(sum==n){
        printf("YES");
    }
    else{
        printf("NO");}
    return 0;
    
}