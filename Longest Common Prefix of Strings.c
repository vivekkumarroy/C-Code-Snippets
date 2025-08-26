/*  Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "".

Examples :

Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
Output: "gee"
Explanation: "gee" is the longest common prefix in all the given strings.
Input: arr[] = ["hello", "world"]
Output: ""
Explanation: There's no common prefix in the given strings.
Constraints:
1 ≤ |arr| ≤ 103
1 ≤ |arr[i]| ≤ 103   */






// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        vector<int>lengthArr;
        int n = arr.size();
        int size =  INT_MAX;
        string s = "";
        string s1 = "";
        for(auto str : arr){
            // size = min(str.length(),size);
            if(str.length() < size){
                s = "";
                s += str;
                size = str.length();
            }
        }
        for(int i = 0; i < size; i++){
             int count = 0;
            for(int j = 0 ; j < n; j++){
                if(arr[j][i] != s[i]){
                    return s1;
                }
            }
              s1 += s[i]; 
        }
        return s1;
    }
};