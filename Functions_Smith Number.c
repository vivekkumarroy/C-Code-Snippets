/*  A Smith number is a composite number where the sum of its digits is equal to the sum of the digits of its prime factors (excluding the number itself).

Write a function is_smith_number(n) that returns 1 if the given number n is a Smith number, otherwise returns 0.

Function Signature

int is_smith_number(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^6
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Smith number, otherwise return 0.
Sample Input 0

666
Sample Output 0

1
Explanation 0

The sum of the digits of 666 is 18.
The prime factors of 666 are 2, 3, 3, 37, and the sum of their digits is 2 + 3 + 3 + 3 + 7 = 18.
Since both sums are equal, 666 is a Smith number.
Sample Input 1

12
Sample Output 1

0
Explanation 1

The sum of the digits of 12 is 1 + 2 = 3.
The prime factors of 12 are 2, 2, 3, and the sum of their digits is 2 + 2 + 3 = 7.
Since both sums are not equal, 12 is not a Smith number.                            */





#include <stdio.h>

int is_smith_number(int n) {
    int sum1=0;
    int rem=0;
    int real=n;
    int sum2=0;
    int rem2=0;
    int flag=1;
    
    for(int k=2;k*k<=n;k++){
        if(n%k==0){ 
            flag=0;
            break;
        }
    }
    
    if(flag==1){
        
        return 0;
    }
    
         if(n>=4){
         while(n>0){
        rem=n%10;
        n=n/10;
         sum1+=rem;
    }
    // printf("%d",sum1);
    for(int i=2;i<=real;i++){
        while(real%i==0){
            real=real/i;
            int x=i;
            while(x>0){
                rem2=x%10;
               x = x/10;
                sum2+=rem2;
            } 
        }
    }
        // printf("%d",sum2);
    if(sum1==sum2){
        return 1;
        
    }
    else{
        return 0;
    }

         }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}
