/*  Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.

where the discriminant D = b^2 − 4ac determines the type of roots:

If D>0, print "Real and Distinct"
If D=0, print "Real and Equal"
If D<0, print "Complex"
Note: You may use the sqrt() function from math.h to compute square roots.

Input Format

A single line containing three space-separated integers: a b c
Constraints

−1000 ≤ a, b, c ≤ 1000
a ≠ 0
Output Format

If the roots are real, print:

Roots: [root1], [root2]
Type: [TYPE]
where,

root1 and root2 are the real roots rounded to 2 decimal places
TYPE is either "Real and Distinct" or "Real and Equal".
If the roots are complex, print:

Roots: [real_part] + [imaginary_part]i, [real_part] - [imaginary_part]i
Type: Complex
where,

real_part is the real part of the root (rounded to 2 decimal places).
imaginary_part is the imaginary part (rounded to 2 decimal places).
Sample Input 0

1 -3 2
Sample Output 0

Roots: 2.00, 1.00
Type: Real and Distinct
Sample Input 1

1 -2 1
Sample Output 1

Roots: 1.00, 1.00
Type: Real and Equal
Sample Input 2

1 2 5
Sample Output 2

Roots: -1.00 + 2.00i, -1.00 - 2.00i
Type: Complex                                */





#include <stdio.h>
#include <math.h>
int main() {

    int  a;
    int b;
    int c;
    scanf("%d  %d  %d ",&a,&b,&c);
    
    if (a==0){
        return 0;
    } 
    
    float d=b*b-4*a*c;
    
      
      if(b==0&&c==0 ){
         printf("Roots: 0.00, 0.00");
         printf("\nType: Real and Equal");
     }
    else if(d==0){
        printf("Roots: %.2f, %.2f",((-b+sqrt(d))/(2.0*a)) ,((-b-sqrt(d))/(2.0*a)));
        printf("\nType: Real and Equal");
    }
    
    else if(d>0){
        printf("Roots: %.2f, %.2f",((-b+sqrt(d))/(2.0*a)) ,((-b-sqrt(d))/(2.0*a)));
        printf("\nType: Real and Distinct");
    }
    else if(d<0){
        printf("Roots: %.2f + %.2fi,",(-b/(2.0*a)),((sqrt(-d))/(2.0*a)));
        printf(" %.2f - %.2fi",(-b/(2.0*a)),((sqrt(-d))/(2.0*a)));
        printf("\nType: Complex");
    }
    
    
    return 0;
}