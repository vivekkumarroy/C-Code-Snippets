/* Given a string s without spaces, the task is to remove all duplicate characters from it, keeping only the first occurrence.

Note: The original order of characters must be kept the same. 

Examples :

Input: s = "zvvo"
Output: "zvo"
Explanation: Only keep the first occurrence
Input: s = "gfg"
Output: "gf"
Explanation: Only keep the first occurrence
Constraints:
1 <= s.size() <= 105
str contains lowercase English alphabets  */





// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        
        unordered_set<char>hs;
        string ans ="";
        for(int i = 0;i<s.length();i++){
            if(hs.find(s[i]) == hs.end()){
                ans +=s[i];
            }
            hs.insert(s[i]);
        }
        return ans;
    }
};