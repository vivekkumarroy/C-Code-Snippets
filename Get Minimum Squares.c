/*  Given a positive integer n, find the minimum number of perfect squares (square of an integer) that sum up to n.

Note: Every positive integer can be expressed as a sum of square numbers since 1 is a perfect square, and any number can be represented as 1*1 + 1*1 + 1*1 + ....

Examples:

Input: n = 100
Output: 1
Explanation: 100 can be written as [102] or [52 + 52 + 52 + 52] and the minimum number of perfect squares needed for 100 is 1.
Input: n = 6
Output: 3
Explanation: Only possible way to make sum equals to 6 is [12 + 12 + 22], so minimum square numbers needed is 3.
Constraints:
1 ≤ n ≤ 104

 */



 class Solution {
  public:
    int count(int n, unordered_map<int,int>& hm) {
        if (n == 0) return 0;
        if (hm.find(n) != hm.end())
            return hm[n];
        int ans = INT_MAX;
        for (int i =1; n-i*i>= 0;i++) {
            ans = min(ans,count(n -i*i, hm));
        }
        return hm[n] = ans+1;
    }

    int minSquares(int n) {
        unordered_map<int,int> hm;
        return count(n, hm);
    }
};
