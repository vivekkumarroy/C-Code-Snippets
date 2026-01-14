/*  Given a non-negative integer n, your task is to find the nth Fibonacci number.

The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1. The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

The Fibonacci sequence is defined as follows:

F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2) for n > 1
Examples :

Input: n = 5
Output: 5
Explanation: The 5th Fibonacci number is 5.
Input: n = 0
Output: 0 
Explanation: The 0th Fibonacci number is 0.
Input: n = 1
Output: 1
Explanation: The 1st Fibonacci number is 1.
Constraints:
0 ≤ n ≤ 30  */







class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int num1 = 0;
        int num2 = 1;
        int num3 = 0;
        if(n<2) return n;
        for(int i = 2;i<=n;i++){
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        return num3;
    }
};