/* Given a string s consisting of only lowercase alphabets, for each index i in the string (0 ≤ i < n), find the first non-repeating character in the prefix s[0..i]. If no such character exists, use '#'.

Examples:

Input: s = "aabc"
Output: a#bb
Explanation: 
At i=0 ("a"): First non-repeating character is 'a'.
At i=1 ("aa"): No non-repeating character, so '#'.
At i=2 ("aab"): First non-repeating character is 'b'.
At i=3 ("aabc"): Non-repeating characters are 'b' and 'c'; 'b' appeared first, so 'b'. 
Input: s = "bb" 
Output: "b#" 
Explanation: 
At i=0 ("b"): First non-repeating character is 'b'.
At i=1 ("bb"): No non-repeating character, so '#'.
Constraints:
1 ≤ s.size() ≤ 105   */






class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        queue<char>q;
        unordered_map<char,int>hm;
        string s1 = "";
        for(int i = 0;i<s.size();i++){
            hm[s[i]]++;
            if(hm[s[i]] == 1)
              q.push(s[i]);
            while(q.size() > 0 && hm[q.front()] > 1){
                q.pop();
            }
            
            if(q.size() > 0){
                s1 += q.front();
            }
            else{
                s1 += "#";
            }
                
            }
            return s1;
    }    
        
    };
