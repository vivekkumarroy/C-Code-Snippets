/* You are given a number n. Print a square matrix pattern that follows a specific pattern as shown below.

For give n = 5, print:

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
Explanation

For n = 5, the outermost square has all 5's, the next square has 4's, the next one has 3's, and so on until the center where the value is 1
Input Format

A single integer n
Constraints

1 ≤ n ≤ 50
Output Format

Print the pattern, where the numbers are printed in concentric squares, starting from the number n at the outermost square, decreasing towards 1 at the center.
Sample Input 0

5
Sample Output 0

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
Sample Input 1

3
Sample Output 1

3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3        */





#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int k,i,j;
        
    for( i=1;i<2*n;i++){
        k=n;
        if(i<=n){
        for(j=1;j<2*n;j++){
            printf("%d ",k);
            if(i>j){
                k=k-1;
            }
            if(i+j>=2*n){
                k=k+1;
            }
        }
        printf("\n");
    }
    
    if(i>n){
        for(j=1;j<2*n;j++){
            
            printf("%d ",k);
            if(i+j<2*n){
                k=k-1;
            }
                if(j>=i){
                    k=k+1;
                }
            }
        printf("\n");
    }       
    }
    return 0;
}