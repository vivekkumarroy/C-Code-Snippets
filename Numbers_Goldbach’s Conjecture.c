/* Goldbach's Conjecture asserts that every even integer greater than 2 can be expressed as the sum of two prime numbers.

Given an integer N, find the smallest prime pair of prime numbers (p, q) such that:

p + q = N
p and q are both prime numbers
p is the smallest prime in the pair (i.e., p ≤ q)
If no such pair exists, print "No Solution".

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

Print the smallest pair of prime numbers p and q such that p + q = N. If no such pair exists, print "No Solution".
Sample Input 0

20
Sample Output 0

3 17
Explanation 0

We have two possible prime pairs that sum to 20:

3 + 17 = 20
7 + 13 = 20
Since 3 is the smallest prime in the pair (3, 17), it is selected as the smallest pair.

Sample Input 1

12
Sample Output 1

5 7                    */




#include <stdio.h>

int main() {
    int num=2;
    int n;
    scanf("%d",&n);
    if(n%2==0&&n>=4){
    while(num<=n){
        int flag=1;
     for(int i=2;i*i<=num;i++){
         if(num%i==0){
             flag=0;
             break;
                 
         }
     }
        if(flag==1){
            int flag2=1;
           for(int j=2;j*j<=n-num;j++){
               if((n-num)%j==0){
                   flag2=0;
                   break;
               }
           }
            if(flag2==1){
                printf("%d %d",num,n-num);
                break;
            }
        }
        num++;
    }
}
    else{
        printf("No Solution");
    }
    return 0;
}