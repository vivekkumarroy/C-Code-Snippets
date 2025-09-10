/*  Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

Note: A palindrome string is a sequence of characters that reads the same forward and backward.

Examples:

Input: s = "abc"
Output: 2
Explanation: Add 'b' and 'c' at front of the above string to make it palindrome: "cbabc"
Input: s = "aacecaaaa"
Output: 2
Explanation: Add 2 a's at front of the above string to make it palindrome: "aaaacecaaaa"
Constraints:
1 ≤ s.size() ≤ 106
s consists of lowercase english alphabets  */




class Solution {
  public:
    int minChar(string &s) {
        // code here
       int n = s.length();
       string txt = s;
        s += "$";
        reverse(txt.begin(),txt.end());
        s += txt;
       vector<int>ans(s.length(),0);
       ans[0] = 0;
       for(int i = 1; i < s.length(); i++){
           int x = ans[i-1];
           while(s[x] != s[i]){
               if(x == 0){
                   x = -1;
                   break;
               }
               x = ans[x - 1];
           }
           ans[i] = x + 1;
       }
       return n - ans[s.length() - 1];
 
    }
};
