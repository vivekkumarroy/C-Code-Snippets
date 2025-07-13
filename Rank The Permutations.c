/* Given a string, find the rank of the string amongst its permutations sorted lexicographically. 

Example 1:

Input:
S = "abc"
Output:
1
Explanation:
The order permutations with letters 
'a', 'c', and 'b' : 
abc
acb
bac
bca
cab
cba
Example 2:

Input:
S = "acb"
Output:
2

Your Task:
You don't need to read input or print anything. Your task is to complete the function findRank() which takes the string S as input parameter and returns the rank of the string amongst its permutations.
It is guaranteed no characters are repeated in the string.


Expected Time Complexity: O(|S|*26)
Expected Auxiliary Space: O(|S|)
Note: |S| represents the length of string S.


Constraints:
1 ≤ |S| ≤ 18  */



class Solution{
  public:
    long long findRank(string str) {
        int n=str.size();
        long long int fact[n+1]={0}, ans =0;
        long long int rank[n]={0};
        fact[0]=1;
       for(int i=1;i<=n;i++){
           fact[i]=i*fact[i-1];
       }
       for(int i=0;i<n-1;i++){       
           int count=0;
           for(int j = i+1;j<n;j++){
               if(str[j]<str[i]) count++;
           }
           rank[i]=count; 
       }
       for(int i =0;i<n;i++){
           ans = ans+rank[i]*fact[n-i-1];
       }
       return ans+1;
    }
};