/*  Bhaskar participates in a lottery for n days, starting with an initial amount of money x. His fate follows certain rules for each day, and Bhaskar might either gain or lose money based on these conditions. Here's how it works:

For each day i:

If day i is divisible by 2, Bhaskar suffers a loss of 1/8th of his current amount.
If day i is divisible by 3, Bhaskar suffers a loss of 1/5th of his current amount.
If day i is divisible by both 2 and 3, Bhaskar gains 70% profit of his current amount. To enjoy his success, he takes a break and plays on the same day the next week, if possible.
If none of the above conditions apply, Bhaskar suffers a loss of 10% of his current amount.
Stop condition: If Bhaskar's money goes below 40% of the initial amount he had, at any point, he stops playing the lottery for the remaining days.

Lucky condition: If Bhaskar's money stays above 70% of the initial amount he had, at the end of the lottery, he is considered lucky, otherwise, unlucky.

At the end of n days, print the final amount Bhaskar has, the minimum amount he held from the start untill the end, and if Bhaskar was Lucky/Unlucky after playing lottery.

Input Format

The first line contains two inputs:

x (the initial amount of money)
n (the number of days Bhaskar wants to play the lottery)
Constraints

50 ≤ x ≤ 1000000
0 ≤ i ≤ 100
Output Format

Print in three lines:

Print the final amount (upto 2 decimal places) Bhaskar has,"After [n] days: [amount]", or, if he stops early, print "Stopped early after [i] days: [amount]".
Print the minimum amount (upto 2 decimal places) Bhaskar held from the start until the end of the game, "Minimum amount held by Bhaskar: [minAmount]".
Print "Lucky Bhaskar", if Bhaskar is considered Lucky by playing the lottery, otherwise, print "Better Luck Next Time!".
Sample Input 0

600 91
Sample Output 0

Stopped early after 28 days: 235.28
Minimum amount held by Bhaskar: 235.28
Better Luck Next Time!
Sample Input 1

5000 18
Sample Output 1

After 18 days: 3556.72
Minimum amount held by Bhaskar: 2092.19
Lucky Bhaskar
Sample Input 2

1000 17
Sample Output 2

After 17 days: 418.44
Minimum amount held by Bhaskar: 418.44
Better Luck Next Time!                                         */




#include <stdio.h>

int main() {
    double x;
    int n;    
    double initial_amount, current_amount, min_amount;
    int stop_day;

    scanf("%lf %d", &x, &n);

    initial_amount = x;
    current_amount = x;
    min_amount = x;
    stop_day = n;

    for (int day = 1; day <= n; day++) {
       
        if (current_amount < 0.4 * initial_amount) {
            stop_day = day - 1;
            break;
        }

       
        if (day % 2 == 0 && day % 3 == 0) {
            current_amount += 0.7 * current_amount; 
            day += 6; 
            if (day > n) break; 
        }
        else if (day % 2 == 0) {
            current_amount -= current_amount / 8;    
        }
        else if (day % 3 == 0) {
            current_amount -= current_amount / 5;    
        }
        else {
            current_amount -= current_amount / 10;   
        }

        
        if (current_amount < min_amount) {
            min_amount = current_amount;
        }
    }

  
    if (stop_day < n) {
        printf("Stopped early after %d days: %.2f\n", stop_day, current_amount);
    } else {
        printf("After %d days: %.2f\n", n, current_amount);
    }

    printf("Minimum amount held by Bhaskar: %.2f\n", min_amount);

    if (current_amount > 0.7 * initial_amount) {
        printf("Lucky Bhaskar\n");
    } else {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}