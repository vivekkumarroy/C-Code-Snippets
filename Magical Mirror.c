/*   In the mystical kingdom of Orlon, there lies an enchanted mirror, renowned for revealing secrets of destiny. However, the mirror tests anyone who dares to stand before it by analyzing a single number. The verdict it delivers is based on a set of ancient rules, but beware—only natural numbers are entertained by the mirror!

A number can hold one of several mystical statuses based on the following conditions:

Condition 1: The number is even and greater than 10.
Condition 2: The number is greater than 15 and a multiple of 3.
Condition 3: The number is a multiple of 7.
The mirror’s verdict is as follows:

If the number satisfies all three conditions, it proclaims the number as "SUPERNATURAL".
If the number satisfies exactly two conditions, it calls the number "MIRACULOUS".
If the number satisfies exactly one condition, it deems the number "MAGICAL".
The number is "NORMAL" if none of the magical conditions are met.
The mirror remains silent for numbers without significance, discarding such attempts with an "INVALID" response.
Your task is to create a program that simulates the enchanted mirror. Based on the input number, the program should output the mirror's verdict.

Input Format

A single integer N, the number provided to the mirror.

Constraints

-10^6 ≤ N ≤ 10^6

Output Format

A single line, "The verdict for the number [N] is: [RESULT]"

Sample Input 0
18

Sample Output 0
The verdict for the number 18 is: MIRACULOUS

Sample Input 1
42

Sample Output 1
The verdict for the number 42 is: SUPERNATURAL

Sample Input 2
14

Sample Output 2
The verdict for the number 14 is: MIRACULOUS

Sample Input 3
8

Sample Output 3
The verdict for the number 8 is: NORMAL     */




#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    if(N<=0) {
        printf("The verdict for the number %d is: INVALID",N);
    }

    else if(((N>10) && (N%2==0)) && ((N>15) && (N%3==0)) && (N%7==0)) {
        printf("The verdict for the number %d is: SUPERNATURAL",N);
    }

    else if((((N>10) && (N%2==0))&& ((N>15) && (N%3==0 )))||(((N>15) && (N%3==0))&& (N%7==0))||(((N>10) && (N%2==0))&& (N%7==0 ))) {

        printf("The verdict for the number %d is: MIRACULOUS", N);
    }
    else if(((N>10) && (N%2==0)) ||((N>15) && (N%3==0))||(N%7==0)) {

        printf("The verdict for the number %d is: MAGICAL", N);
    }
    else {
        printf("The verdict for the number %d is: NORMAL",N);
    }
    return 0;
}