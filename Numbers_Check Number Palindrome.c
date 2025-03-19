/*  Given an integer 𝑁, write a program to determine whether 𝑁 is a palindrome. A number is called a palindrome if it reads the same backward as forward.

Input Format

A single integer 𝑁.
Constraints

1 <= N <= 109
Output Format

Print "YES" if 𝑁 is a palindrome, otherwise print "NO".
Sample Input 0

121
Sample Output 0

YES
Explanation 0

121 is palindrome.

Sample Input 1

146
Sample Output 1

NO
Explanation 1

146 is not palindrom.       */




#include <stdio.h>

int main() {

  int n;
    int rem;
    int rev=0;
    scanf("%d",&n);
    int real=n;
    while(n>0){
       rem =n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    
    if(real==rev){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}