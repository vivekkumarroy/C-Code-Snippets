/*  Implement a function find_most_frequent_digit(n) that returns the most frequent digit in a given number n. If there is a tie in frequency, return the largest of those digits.

Function Signature

int find_most_frequent_digit(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as a parameter.
Constraints

0 ≤ n ≤ 10^9
Output Format

Do not print anything inside the function.
The function must return the most frequent digit as an integer. If there is a tie, return the largest digit among those with the highest frequency.
Sample Input 0

122333
Sample Output 0

3
Sample Input 1

140334
Sample Output 1

4                           */






#include <stdio.h>

int find_most_frequent_digit(int n) {
    int max_freq = 0;
    int most_freq_digit = 0;
    int temp;
    
    if(n == 0){
        return 0;
    }
    
    for(int i = 0; i <= 9; i++) {
        int freq = 0;
        temp = n;
        while(temp != 0) {
            int digit = temp % 10;
            if(digit == i) {
                freq++;
            }
            temp /= 10;
        }
        if(freq > max_freq) {
            max_freq = freq;
            most_freq_digit = i;
        } else if(freq == max_freq) {
            if(most_freq_digit < i) {
                most_freq_digit = i;
            }
        }
    }
    return most_freq_digit;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}