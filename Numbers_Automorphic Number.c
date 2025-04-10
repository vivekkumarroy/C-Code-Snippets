/*   An Automorphic Number is a number whose square ends with the same digits as the number itself.

Write a program to check if a given number N is Automorphic or not.

Input Format

A single integer N
Constraints

0 ≤ N ≤ 10^6
Output Format

Print "[N] is automorphic" if N is an Automorphic number.
Print "[N] is not automorphic" otherwise.
Sample Input 0

25
Sample Output 0

25 is automorphic
Explanation 0

25² = 625, and the last two digits of 625 are 25, which are the same as the number itself.
Sample Input 1

13
Sample Output 1

13 is not automorphic
Explanation 1

13² = 169, and the last two digits of 169 are 69, which are different from 13.  */





#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int rem1;
    int real=n;
    int count=0;
    int rem2;
    int rev=0;
    int rem3;
    int rev2=0;
    if(n==0){
       printf("0 is automorphic");
        return 0;
    }
   while(n>0){
       rem1 =n*n;
       break;
   }
    while(n>0){
         n=n/10;
        count++;
   }
    for(int i=1;i<=count;i++){
       rem2= rem1%10;
        rev=rev*10+rem2;
         rem1=rem1/10;
    }
    for(int j=1;j<=count;j++){
         rem3=rev%10;
          rev2=rev2*10+rem3;
        rev=rev/10;
    }
    // printf("%d",rev2);
    if(real==rev2){
        printf("%d is automorphic",real);
    }
    else{
         printf("%d is not automorphic",real);
    }
    return 0;
}
