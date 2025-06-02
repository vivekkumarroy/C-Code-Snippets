/*Given two strings s1 and s2 which are of lengths n and n+1. The second string contains all the character of the first string, but there is one extra character. Your task to find the extra character in the second string and return it. 

Examples:

Input: s1 = abcd, s2 = badce
Output: e
Input: s1 = efg, s2 = gtfe
Output: t        */



char extraChar(string &s1, string &s2) {

    int n = s1.size();
    
    char character = 0; 
    for(int i=0;i<n;i++){
        character ^= s1[i];
    }
    for(int i=0;i<=n;i++){
        character ^= s2[i];
    }
    return character;
    
}