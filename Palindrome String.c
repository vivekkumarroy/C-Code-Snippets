/*  You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

Examples :

Input: s = "abba"
Output: true
Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.
Input: s = "abc" 
Output: false
Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome.
Constraints:
1 ≤ s.size() ≤ 106
The string s contains only lowercase english letters (a-z).  */






class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int p1 = 0,p2 = s.length()-1;
        while(p1 < p2){
            if(s[p1]!= s[p2]){ return false;}
            p1++;p2--;
        }
        return true;
    }
};