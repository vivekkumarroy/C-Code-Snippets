/*  Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

 

Example 1:

Input: s = "bcabc"
Output: "abc"
Example 2:

Input: s = "cbacdcbc"
Output: "acdb"
 

Constraints:

1 <= s.length <= 104
s consists of lowercase English letters.  */




class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        unordered_map<char,int>hm;
        unordered_set<char>hs;

        for(int i = 0 ;i < s.length();i++){
            hm[s[i]]++;
        }

        for(int i = 0;i<s.length();i++){
            if(hs.find(s[i]) != hs.end()){
                hm[s[i]]--;
            }
            else{
                while(st.size()>0 && st.top() > s[i] && hm[st.top()] > 0){
                    hs.erase(st.top());
                    st.pop();
                }
                st.push(s[i]);
                hm[s[i]]--;
                hs.insert(s[i]);
            }
        }
        string ans = "";
        while(st.size()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};