/* A year is considered a leap year if:

It is divisible by 4.
However, if it is divisible by 100, it must also be divisible by 400 to be considered a leap year.
Write a program that checks if a given year is a leap year or not, outputs the result in a specific format, and handles invalid years as well.

Input Format

A single integer Y representing the year.
Constraints

−10^5 ≤ Y ≤ 10^5

Output Format

Print "The given year [Y] is Invalid year." if the year is invalid.
Print "Yes, [Y] is a leap year." if the year is a leap year.
Print "No, [Y] is not a leap year." otherwise.
Sample Input 0
2024

Sample Output 0
Yes, 2024 is a leap year.

Sample Input 1
2001

Sample Output 1
No, 2001 is not a leap year.

Sample Input 2
-234

Sample Output 2
The given year -234 is Invalid year.  */


#include <stdio.h>

int main() {

    int Y;
    scanf("%d",&Y);
    if(Y<=0){
        printf("The given year %d is Invalid year.\n",Y);
    }
    else if(Y%4==0 && Y%100==0 && Y%400==0){
         printf("Yes, %d is a leap year.\n",Y);
      }
    else if(Y%4==0 && Y%100==0){
        printf("No, %d is not a leap year.\n",Y);
    } 
    
    else if(Y%4==0){
        printf("Yes, %d is a leap year.\n",Y);
    }
    else{
        printf("No, %d is not a leap year.\n",Y);
    }
        
    return 0;
}