/*    Write a program to print an Up Arrow pattern based on the input size n, where n represents the total number of rows of the pattern.

The pattern consists of two parts:

The first part has n/2 rows, forming the head of the arrow.
The second part has n/2 rows, forming the tail of the arrow.
Note:

If the input n is odd, convert it the next even number, to print the shape.
Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the pattern cannot be drawn by the given input value.
Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 100
Output Format

Print the Up Arrow pattern as described above.
Print "Shape Not Possible" if the pattern cannot be drawn.
Sample Input 0

12
Sample Output 0

     *      
    ***     
   * * *    
  *  *  *   
 *   *   *  
*    *    * 
     *
     *
     *
     *
     *
     *
Sample Input 1

0
Sample Output 1

Shape Not Possible                */








#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    if(n>2){
        if(n%2==0){  
       for(int i=1;i<=n/2;i++){
        for(int k=1;k<=n/2-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1||j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for(int i=2;i<=n/2+1;i++){
        for(int k=1;k<=i-2;k++){
            printf(" ");
        }
        for(int j=1;j<=(n/2-i+1+1)*2-1;j++){
            if(j==n/2-i+1+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        

        printf("\n");
    }
}
   else{
       for(int i=1;i<=(n+1)/2;i++){
        for(int k=1;k<=(n+1)/2-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1||j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for(int i=2;i<=(n+1)/2+1;i++){
        for(int k=1;k<=i-2;k++){
            printf(" ");
        }
        for(int j=1;j<=((n+1)/2-i+1+1)*2-1;j++){
            if(j==((n+1)/2-i+1+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        

        printf("\n");
    }
   }     
        
   }
else{
    printf("Shape Not Possible");
}
    return 0;
}