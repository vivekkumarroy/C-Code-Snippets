/*  A number is called a Strong number if the sum of the factorials of its digits is equal to the number itself.

Given an integer N, determine whether it is a Strong number or not.

Input Format

A single integer N
Constraints

1 ≤ N ≤ 10⁶
Output Format

Print "YES" if N is a Strong number, otherwise print "NO"
Sample Input 0

145
Sample Output 0

YES
Explanation 0

1! + 4! + 5! = 1 + 24 + 120 = 145

Sample Input 1

123
Sample Output 1

NO                                  */





#include <stdio.h>

int main() {

   int n;
    int rem;
    scanf("%d",&n);
    int real=n;
    int sum=0;
    // int fact;
    while(n>0){
        int pro=1;
        rem=n%10;
        n=n/10;
        for(int i=1;i<=rem;i++){
            pro=i*pro;
        }
        sum+=pro;
        
    }
    // printf("%d",sum);
    if(sum==real){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}