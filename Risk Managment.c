/*     You are tasked with building a simple risk management system for an investment advisor. The system evaluates the risk of a portfolio based on the investor's choices and calculates an appropriate risk level. The goal is to determine if the investor's portfolio is low, medium, or high risk, and then provide investment suggestions.

An investment advisor wants to help clients build an investment portfolio. The risk level of the portfolio depends on three key factors:

Age of the Investor:
Investors under 30 years are more likely to take risks.
Investors between 30 and 50 are generally conservative but willing to accept some risk.
Investors above 50 are risk-averse and prefer stable investments.
Annual Income of the Investor:
Higher income investors are more likely to invest in riskier assets.
Lower income investors should avoid high-risk investments.
Investment Preference (Risk Tolerance):
Investors who prefer higher returns are more likely to accept higher risk.
Investors who prefer safe, steady returns are risk-averse.
Write a program that determines the risk level of an investor’s portfolio based on the three inputs: age, income, and risk tolerance. The system should output one of the following risk levels:

Low Risk: Suitable for conservative investors who prefer stable returns and do not take risks.
Medium Risk: Suitable for investors who are willing to take moderate risks for a balance of returns.
High Risk: Suitable for investors who are willing to take high risks for potentially high returns.
Decision Logic:

Low Risk Portfolio:
Investor is above 50 years old, unless he has high income (>75,000) and high risk tolerance(3)
Investor has low income (<= 30,000) and prefers low or medium risk (tolerance 1 or 2).
Medium Risk Portfolio:
Investor is between 30 and 50 years old (inclusive), with low or medium income (<= 75,000), and prefers medium risk (tolerance 2).
Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers low or medium risk (tolerance 1 or 2).
High Risk Portfolio:
Investor is under 30 years old, regardless of income or risk tolerance.
Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers high risk (tolerance 3).
Investor is above 50 years old, prefers high risk (tolerance 3), and has high income (> 75,000).
Input Format

Age: An integer representing the investor’s age.
Annual Income: An integer representing the investor’s annual income.
Risk Tolerance: An integer where:
1 means low risk (safe investments).
2 means medium risk (balanced investments).
3 means high risk (aggressive investments).
Constraints

0 < Age < 100
0 < Annual Income < 1000000
0 < Risk Tolerance < 4
Output Format

Print one of the following messages based on the risk level:

"Low Risk Portfolio: Suitable for conservative investments."
"Medium Risk Portfolio: Balanced risk for moderate returns."
"High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance."
Sample Input 0
55
60000
2

Sample Output 0
Low Risk Portfolio: Suitable for conservative investments.

Sample Input 1
65
25000
1

Sample Output 1
Low Risk Portfolio: Suitable for conservative investments.

Sample Input 2
51
80000
3

Sample Output 2
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 3
40
60000
2

Sample Output 3
Medium Risk Portfolio: Balanced risk for moderate returns.

Sample Input 4
35
85000
1

Sample Output 4
Medium Risk Portfolio: Balanced risk for moderate returns.

Sample Input 5
30
75000
2

Sample Output 5
Medium Risk Portfolio: Balanced risk for moderate returns.

Sample Input 6
25
50000
2

Sample Output 6
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 7
45
80000
3

Sample Output 7
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 8
29
30000
1

Sample Output 8
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 9
90
100000
3

Sample Output 9
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 10
40
85000
1

Sample Output 10
Medium Risk Portfolio: Balanced risk for moderate returns.

Sample Input 11
50
75000
2

Sample Output 11
Medium Risk Portfolio: Balanced risk for moderate returns.

Sample Input 12
25
20000
1

Sample Output 12
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 13
45
80000
3

Sample Output 13
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 14
60
90000
3

Sample Output 14
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 15
35
50000
2

Sample Output 15
Medium Risk Portfolio: Balanced risk for moderate returns.

Sample Input 16
30
75001
3

Sample Output 16
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.

Sample Input 17
55
60000
2

Sample Output 17
Low Risk Portfolio: Suitable for conservative investments.

Sample Input 18
52
80000
2

Sample Output 18
Low Risk Portfolio: Suitable for conservative investments.

Sample Input 19
51
85000
3

Sample Output 19
High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.     */




#include <stdio.h>

int main() {

    int age, inc, rt;

    scanf("%d", &age);

    scanf("%d", &inc);

    scanf("%d", &rt);

    if ((age < 30) || 

        (age >= 30 && age <= 50 && inc > 75000 && rt == 3) || 

        (age > 50 && inc > 75000 && rt == 3)) {

        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");

    } else if ((age >= 30 && age <= 50 && inc <= 75000 && rt == 2) || 

               (age >= 30 && age <= 50 && inc > 75000 && (rt == 2 || rt == 1))) {

        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");

    } else if ((age > 50 && rt <= 2) || 

               (inc <= 30000 && rt <= 2)) {

        printf("Low Risk Portfolio: Suitable for conservative investments.");

    } else {

        return 0;

    }

    return 0;

}