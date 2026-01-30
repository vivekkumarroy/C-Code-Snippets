/*   Given a binary tree s and a number k, the task is to find the sum of tree nodes at level k. The Binary Tree is given in string form s: (node-value(left-subtree)(right-subtree)).

Examples:

Input: s = "(0(5(6()())(4()(9()())))(7(1()())(3()())))" , k = 2
Output: 14
Explanation:
The Tree from the above String will be formed as:
                             0
                           /   \
                          5      7
                        /  \    /  \
                       6    4  1    3
                             \
                              9  
Sum of nodes at the 2nd level is 6+4+1+3 = 14.
Input: s = "(4(8()9())" , k = 1
Output: 17
Explanation:
The Tree from the above String will be formed as:
                             4
                           /   \
                          8     9
Sum of nodes at the 1st level is 8+9 = 17.
Input: s = "(2)" , k = 0
Output: 2 
Explanation:
The Tree from the above String will be formed as: 2                                                    
Sum of nodes at the 0th level is 2.
Constraints:
1 <= |s| <= 105
0 <= k <= 15  */



// User function Template for C++

class Solution {
  public:
    int kLevelSum(string s, int k) {
        // code here
    int level = -1;
    int sum = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            level++;
        } else if (s[i] == ')') {
            level--;
        } else if (level == k) {
            int val = 0;
            while (i < n && s[i] != '(' && s[i] != ')') {
                val = val * 10 + (s[i] - '0');
                i++;
            }
            i--;
            sum += val;
        }
    }
    return sum;
    }
};