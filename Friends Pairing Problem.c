/*  Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.

Examples :

Input: n = 3
Output: 4
Explanation:
{1}, {2}, {3} : All single
{1}, {2,3} : 2 and 3 paired but 1 is single.
{1,2}, {3} : 1 and 2 are paired but 3 is single.
{1,3}, {2} : 1 and 3 are paired but 2 is single.
Note that {1,2} and {2,1} are considered same.
Input: n = 2
Output: 2
Explanation:
{1} , {2} : All single.
{1,2} : 1 and 2 are paired.
Input: n = 1
Output: 1
Constraints:
1 ≤ n ≤ 18   */




class Solution {
  public:
  
  int count(int i ,unordered_map<int,int>&hm){
      
      if(i <=2)return i;
      
      if(hm.find(i) == hm.end()){
         int a = count(i-1,hm) ;
         int b = (i-1)*count(i-2,hm);
         hm[i] = a+b;
      }
      return hm[i];
      
  }
  
    int countFriendsPairings(int n) {
        // code here
        unordered_map<int,int>hm;
        return  count(n,hm);
    }
};
