/*Aakash has recently started his new job and is extremely busy managing his work and tasks. As a result, he doesn’t have time to figure out his income tax calculations manually. To simplify this, he wants someone to create a reliable system that can calculate his income tax based on the Indian tax rules.

The system should work as follows:

If Aakash’s income is ₹2,50,000 or less, no tax should be calculated.
For an income greater than ₹2,50,000 upto ₹5,00,000, the tax is 5% on the amount exceeding ₹2,50,000.
For an income greater than ₹5,00,000 upto ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the amount exceeding ₹5,00,000.
For an income above ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the next ₹5,00,000 above ₹5,00,000, 30% on the amount exceeding ₹10,00,000.
The system should take his annual income as input and output the total tax payable. Additionally, if the input is invalid, the system should display "INVALID".

Aakash expects this system to be efficient and user-friendly since he needs it to quickly determine his tax liability without any hassle. Your program should calculate the total tax payable based on these rules.

Input Format

A single floating-point number income representing the annual income

Constraints

-10^7 ≤ income ≤ 10^7

Output Format

If the income is valid, print the tax payable up to 2 decimal places.
If the income is invalid, print "INVALID".

Sample Input 0
450000

Sample Output 0
10000.00

Sample Input 1
500000

Sample Output 1
12500.00

Sample Input 2
250000

Sample Output 2
0.00

Sample Input 3
856734

Sample Output 3
83846.80   */


#include <stdio.h>

int main() {

    float amount ,tax;
    scanf("%f",&amount);
    if(amount<0){
        printf("INVALID");
    }
    else if((amount<=250000)){
        printf("0.00");
    }
    else if((amount>250000&&amount<=500000)){
          tax=(amount-250000)/20;
             
        printf("%.2f",tax);
    }
    else if((amount>500000&&amount<=1000000)){
         tax=(250000)/20 +(amount-500000)/5;
      
        printf("%.2f",tax);   
    }
     
    else if(amount>1000000){
       tax=(250000)/20 +(500000)/5 +(amount-1000000)*0.3;
              
        printf("%.2f",tax);
        
    }
    
    return 0;
}