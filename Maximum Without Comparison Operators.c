/*   Write a program to find the maximum of two integers a and b without using any comparison operators (<, >, <=, >=) and if-else at any stage in the program. Use only bitwise operators and logical operators to determine which number is larger.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print the larger of the two integers.

Sample Input 0
5 3

Sample Output 0
5

Sample Input 1
-7 2

Sample Output 1
2                      */

sloution 1....
  
#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int c=a-b;
    if(c>>31&1){
        printf("%d",b);    
    }
    else {
       printf("%d",a);
    }
    return 0;
}



solution 2.....

#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
    int c=a-b;
     int d=((c>>31) &1); 
     int max=(a*(1-d)) + (b*d);
    printf("%d",max);
    return 0;
}


solution 3....

#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d",&a,&b);
     int x = a-b;
     int d = (x>>31);
    int max=((a&~d) |(b&d));
    printf("%d",max);
    return 0;
}            
                 