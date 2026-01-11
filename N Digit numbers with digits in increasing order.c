/*  Given an integer n, print all the n digit numbers in increasing order, such that their digits are in strictly increasing order(from left to right).

Example 1:

Input:
n = 1
Output:
0 1 2 3 4 5 6 7 8 9
Explanation:
Single digit numbers are considered to be 
strictly increasing order.
Example 2:

Input:
n = 2
Output:
12 13 14 15 16 17 18 19 23....79 89
Explanation:
For n = 2, the correct sequence is
12 13 14 15 16 17 18 19 23 and so on 
up to 89.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function increasingNumbers() which takes an integer n as an input parameter and returns the list of numbers such that their digits are in strictly increasing order.

Expected Time Complexity: O(9n)
Expected Auxiliary Space: O(n)

Constraints:
1 <= n <= 9  */





class Solution {
public:
    void findDigit(int a, int b, string c, vector<int>& result) {
        if (a == 0) {
            result.push_back(stoi(c));
            return;
        }

        for (int i = b; i <= 9; i++) {
            if (c.empty() && i == 0) continue;

            findDigit(a - 1, i + 1, c + to_string(i), result);
        }
    }

    vector<int> increasingNumbers(int n) {
        vector<int> result;

        if (n == 1) {
            for (int i = 0; i <= 9; i++)
                result.push_back(i);
            return result;
        }

        findDigit(n, 0, "", result);
        return result;
    }
};
