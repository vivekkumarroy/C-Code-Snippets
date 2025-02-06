/*  Steel is graded based on its properties of hardness, carbon content, and tensile strength. The grade is determined by the following conditions:

1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7.
3. Tensile strength must be greater than 5600.
Based on these conditions, the grades are assigned as follows:

10: If all three conditions are met.
9 : If conditions (i) and (ii) are met.
8 : If conditions (ii) and (iii) are met.
7 : If conditions (i) and (iii) are met.
6 : If only one condition is met.
5 : If none of the conditions are met.
Your task is to determine the grade of steel based on the provided values of hardness, carbon content, and tensile strength.

Input Format

Three space-separated values:

h: Hardness of the steel (an integer).
c: Carbon content of the steel (a float).
t: Tensile strength of the steel (an integer).
Constraints

0 ≤ h ≤ 500
0.0 ≤ c ≤ 1.0
0 ≤ t ≤ 50000
Output Format

Print 2 different messages:

One Inlcuding the grade of the steel, "The grade of the steel is: [grade]"
The number of conditions met,
"Only one condition met."
"Two conditions met."
"All of the conditions met."
"None of the conditions met."

Sample Input 0
60 0.5 6000

Sample Output 0
The grade of the steel is: 10  
All of the conditions met.

Sample Input 1 
55 0.6 5000

Sample Output 1
The grade of the steel is: 9  
Two conditions met.

Sample Input 2
60 0.9 5000

Sample Output 2
The grade of the steel is: 6  
Only one condition met.

Sample Input 3
30 0.9 4000

Sample Output 3
The grade of the steel is: 5  
None of the conditions met.    */



#include <stdio.h>

int main() {

    int h,t;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    if(h<=50 && c>=0.7 && t<=5600){
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.\n");
    }
     else if(h>50 && c<0.7 && t>5600){
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.\n");
    }
    
    else if(h>50 && c<0.7 &&  t<=5600){
         printf("The grade of the steel is: 9\n");
         printf("Two conditions met.\n");
    }
    
    else if( c<0.7 && t>5600 && h<=50){
         printf("The grade of the steel is: 8\n");
         printf("Two conditions met.\n");
    }
    
    else if(h>50 && c>=0.7 && t>5600){
        printf("The grade of the steel is: 7\n");
         printf("Two conditions met.\n");
    }
    else {
         printf("The grade of the steel is: 6\n");
         printf("Only one condition met.\n");
    }
    return 0;
}
