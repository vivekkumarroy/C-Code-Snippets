/*  An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.

 

Example 1:

Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.
Example 2:

Input: n = 1
Output: 1
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
 

Constraints:

1 <= n <= 1690  */



class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly_nums(n);
        ugly_nums[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;

        for (int i = 1; i < n; ++i) {
            int next2 = ugly_nums[i2] * 2;
            int next3 = ugly_nums[i3] * 3;
            int next5 = ugly_nums[i5] * 5;

            int next_ugly = min({next2, next3, next5});
            ugly_nums[i] = next_ugly;

            if (next_ugly == next2) ++i2;
            if (next_ugly == next3) ++i3;
            if (next_ugly == next5) ++i5;
        }
        return ugly_nums[n - 1];
    }
};
