/*  Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
Example 2:

Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.
Example 3:

Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.
 

Constraints:

m == s.length
n == t.length
1 <= m, n <= 105
s and t consist of uppercase and lowercase English letters.
 

Follow up: Could you find an algorithm that runs in O(m + n) time?   */





#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

string minWindow(string s, string t) {
    int windowStart = 0, minLength = INT_MAX, matched = 0, start = 0;
    unordered_map<char, int> tMap;

    // Build frequency map for characters in t
    for (char ch : t) {
        tMap[ch] += 1;
    }

    // Expand the window
    for (int windowEnd = 0; windowEnd < (int)s.length(); windowEnd++) {
        char currChar = s[windowEnd];

        // If current char is in tMap, decrease its count
        if (tMap.find(currChar) != tMap.end()) {
            tMap[currChar] -= 1;
            if (tMap[currChar] >= 0) {
                matched += 1;  // Found a needed char
            }
        }

        // When all chars matched, try to shrink the window
        while (matched == (int)t.length()) {
            // Update minimum length window if smaller window found
            if (minLength > windowEnd - windowStart + 1) {
                minLength = windowEnd - windowStart + 1;
                start = windowStart;
            }

            char leftChar = s[windowStart];
            windowStart++;

            // Put leftChar back to tMap if it is part of t
            if (tMap.find(leftChar) != tMap.end()) {
                if (tMap[leftChar] == 0) {
                    matched -= 1; // one char removed from matched count
                }
                tMap[leftChar] += 1;
            }
        }
    }

    return (minLength > (int)s.length()) ? "" : s.substr(start, minLength);
}

