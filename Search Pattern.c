/*  Given two strings, one is a text string txt and the other is a pattern string pat. The task is to print the indexes of all the occurrences of the pattern string in the text string. Use 0-based indexing while returning the indices.
Note: Return an empty list in case of no occurrences of pattern.

Examples :

Input: txt = "abcab", pat = "ab"
Output: [0, 3]
Explanation: The string "ab" occurs twice in txt, one starts at index 0 and the other at index 3. 
Input: txt = "abesdu", pat = "edu"
Output: []
Explanation: There's no substring "edu" present in txt.
Input: txt = "aabaacaadaabaaba", pat = "aaba"
Output: [0, 9, 12]
Explanation:

Constraints:
1 ≤ txt.size() ≤ 106
1 ≤ pat.size() < txt.size()
Both the strings consist of lowercase English alphabets.  */





class Solution {
  public:
   vector<int> lps(string s){
       int n = s.length();
       vector<int>ans(n,0);
       ans[0] = 0;
       for(int i = 1; i < n; i++){
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
       return ans;
   }
    vector<int> search(string &pat, string &txt) {
        // code here
        int m = pat.length();
        pat +=  "$"  + txt;
        int N = pat.length();
        vector<int> lpsArr = lps(pat);
        vector<int>res;
        
        for(int i = 0; i < N ; i++){
            if(lpsArr[i] == m){
                
                res.push_back(i - 2*m);
            }
        }
        return res;
        
    }
};