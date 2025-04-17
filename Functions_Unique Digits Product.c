/*   Implement a function find_unique_digit_product(n) that returns the product of the unique digits present in the given number n. The product should only consider distinct digits, ignoring any repeating digits.

Function Signature

int find_unique_digit_product(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

0 ≤ n ≤ 10^9
Output Format

Do not print anything inside the function.
The function must return the unique digits product as an integer.
Sample Input 0

123
Sample Output 0

6
Sample Input 1

9987
Sample Output 1

504  */





#include <stdio.h>
#include <stdbool.h>
int find_unique_digit_product(int n) {
    // Implement the function
    int rem1=0;
    int pro=1;
    bool flag1=true;
    bool flag2=true;
    bool flag3=true;
    bool flag4=true;
    bool flag5=true;
    bool flag6=true;
    bool flag7=true;
    bool flag8=true;
    bool flag9=true;
    bool flag0=true;
    if(n==0){
        return 0;
    }

        
    while(n>0){
        rem1=n%10;
    
        n/=10;
        
        switch(rem1){
            case 1: if(rem1 == 1 && flag1){
                        pro*=rem1;
                         flag1=false;
                          break;
                     }
                case 2: if(rem1 == 2 && flag2){
                        pro*=rem1;
                         flag2=false;
                          break;
                     }
                case 3: if(rem1 == 3 && flag3){
                        pro*=rem1;
                         flag3=false;
                          break;
                     }
                case 4: if(rem1 == 4 && flag4){
                        pro*=rem1;
                         flag4=false;
                          break;
                     }
                case 5: if(rem1 == 5 && flag5){
                        pro*=rem1;
                         flag5=false;
                          break;
                     }
                case 6: if(rem1 == 6 && flag6){
                        pro*=rem1;
                         flag6=false;
                          break;
                     }
                case 7: if(rem1 == 7 && flag7){
                        pro*=rem1;
                         flag7=false;
                          break;
                     }
                case 8: if(rem1 == 8 && flag8){
                        pro*=rem1;
                         flag8=false;
                          break;
                     }
                case 9: if(rem1 == 9 && flag9){
                        pro*=rem1;
                         flag9=false;
                          break;
                     }
                case 0: if(rem1 == 0 && flag0){
                        pro*=rem1;
                         flag0=false;
                          break;
                     }
                
                   
        }
        
    }

    
    return pro;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



