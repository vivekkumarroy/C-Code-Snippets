/*  You are given a string s representing an infix expression. Convert this infix expression to a postfix expression.

Infix expression: The expression of the form a op b. When an operator is in between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Note: The precedence order is as follows: (^) has the highest precedence and is evaluated from right to left, (* and /) come next with left to right associativity, and (+ and -) have the lowest precedence with left to right associativity.

Examples :

Input: s = "a*(b+c)/d"
Output: abc+*d/
Explanation: The expression is a*(b+c)/d. First, inside the brackets, b+c becomes bc+. Now the expression looks like a*(bc+)/d. Next, multiply a with (bc+), so it becomes abc+* . Finally, divide this result by d, so it becomes abc+*d/.
Input: s = "a+b*c+d"
Output: abc*+d+
Explanation: The expression a+b*c+d is converted by first doing b*c -> bc*, then adding a -> abc*+, and finally adding d -> abc*+d+.
Input: s = "(a+b)*(c+d)"
Output: ab+cd+*
Explanation: The expression (a+b)*(c+d) is converted by first doing (a+b) -> ab+, then doing (c+d) -> cd+, and finally the expression ab+*cd+ becomes ab+cd+*. 
Constraints:
1 ≤ s.length ≤ 5*103
s[i] can be an operand (a–z, A–Z, 0–9), an operator (+, -, *, /, ^) or a parenthesis ((, ))

  */



  #include <stack>
using namespace std;

class Solution {
  public:
  
    int precedence(char op) {
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        if (op == '^') return 3;
        return 0;
    }
  
    string infixToPostfix(string& s) {
        stack<char> st;
        string result = "";
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
                if (isalnum(ch)) {
                result += ch;
            }
            else if (ch == '(') {
                st.push(ch);
            }
            else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
                while (!st.empty() && 
                      (precedence(st.top()) > precedence(ch) ||
                      (precedence(st.top()) == precedence(ch) && ch != '^'))) {
                    result += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};