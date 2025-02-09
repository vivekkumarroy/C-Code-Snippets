/*   Write a C program to classify an integer N into one of the following categories based on specific conditions:

Categories:

Category A: N is divisible by 2 and 3 but not divisible by 5.
Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
Category D: N is a perfect square less than 200.
Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
Category E: If none of the above conditions are satisfied.
Note: Output the category that comes first in lexicographic order.

Input Format

A single integer N

Constraints

-10^3 ≤ N ≤ 10^3

Output Format

A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').

Sample Input 0
18

Sample Output 0
A

Sample Input 1
15

Sample Output 1
C

Sample Input 2
30

Sample Output 2
C

Sample Input 3
21

Sample Output 3
B

Sample Input 4
9

Sample Output 4
D

Sample Input 5
33

Sample Output 5
B                */


  #include <stdio.h>

    int main() {

    int N;
    scanf("%d",&N);
   
     
      if(N%2==0&&N%3==00 &&N%5!=0){
        printf("A");
    }
      else if(N>20 && (N==22||N==33 ||N==21 || N==35 ||N==55||N==77) ){
        printf("B");
    }
    
    else if((N%3==0 ||N%7==0) && !(N%3==0 && N%7==0) &&((N>9 && N<=99) ||(N>=-99 && N<=-10)) ){
        printf("C");
    }
    
     else if(N<200 &&(N==1||N==4||N==9||N==16||N==25|| N==36|| N==49|| N==64|| N==81||N==100||N==121||N==144||N==169||N==196)  && N>=1){
        printf("D");
    }
    
    
       else {
           printf("E");
       }
    
    return 0;
}