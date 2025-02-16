/*  Write a program to check if two integers a and b differ by exactly one bit using bitwise operators. Two numbers differ by exactly one bit if their binary representations differ in only one position.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤10^9
Output Format

Output "Yes" if the given numbers differ by exactly one bit, otherwise output "No".

Sample Input 0
5 7

Sample Output 0
Yes

Sample Input 1
7 14

Sample Output 1
No                       */



#include <stdio.h>

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    int c = n ^ m;
    if (c != 0 && (c & (c- 1)) == 0) {
        printf("Yes\n");   
    }
    else {
        printf("No\n");
    }
    
    return 0;
}




#include <stdio.h>

int main() {
    int n ,r;
    scanf("%d", &n);
    
    r = (n & (n - 1)); 
    
    if (n == 0) {
        printf("No");
    } 
    else if(r==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    
    return 0;
}

