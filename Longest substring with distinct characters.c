/*   . You have to find the length of the longest substring with all distinct characters. 

Examples:

Input: s = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest substring with all distinct characters.
Input: s = "aaa"
Output: 1
Explanation: "a" is the longest substring with all distinct characters.
Input: s = "abcdefabcbb"
Output: 6
Explanation: The longest substring with all distinct characters is "abcdef", which has a length of 6.
Constraints:
1 ≤ s.size() ≤ 105
s consists of lowercase english letters.  */








class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char,int>hm;
        int n = s.length();
        int p1 = 0,p2 = -1;
        int ans = 0;
        while(p2 < n ){
            if((p2 - p1 + 1) == hm.size()){
            ans = max(ans,p2 - p1 + 1);
               p2++;
               if(p2 == n){
                   break;
                }
               hm[s[p2]]++;
            }
            else{
             hm[s[p1]]--;
             if(hm[s[p1]] == 0){
                 hm.erase(s[p1]);
              }
             p1++;
            }
        }
        return ans;
    }
};
