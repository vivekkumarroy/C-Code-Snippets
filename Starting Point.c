/*  You are a traveler, lost in a jungle. Backtrack your steps and find the starting point.

Currently, you are at coordinates (x,y). You are also given an array pathCoordinates [ ] where each element is a (a,b) pair.

The ith pair (a,b), in the array, denotes that in the ith move you moved your X co-ordinate by a and Y co-ordinate by b. 
if X,Y coordinates in an instant are (c,d) then your next move will be to ( c+a, d+b). 

Example 1:

Input: x = 2, y = 2, 
pathCoordinates = {{1,0},{0,1},{1,1}}
Output: {0,0}
Explaination:
{0,0} was the starting point of the traveler.
At first he changed his X co-ordinate by 1 and
Y co-ordinate by 0.
{0,0} -> {1,0}
After that he changed his X co-ordinate by 0 and
Y co-ordinate by 1.
{0,0} -> {1,0} -> {1,1}
And finally, he changed his X co-ordinate by 1 and
Y co-ordinate by 1.
{0,0} -> {1,0} -> {1,1} -> {2,2}


Example 2:

Input: x = 1, y = 2,
pathCoordinates = {{1,1}}
Output: {0,1}
Explaination:
The route followed by the traveller is
{0,1} -> {1,2}.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function findStartingPoint() which takes x, y, and pathCoordinates as input parameters and returns a list containing the starting point.
 

Expected Time Compelxity: O(n) where n = length of pathCoordinates.
Expected Space Complexity: O(1)
 

Constraints:
1 <= n <= 103

 */



 // User function Template for C++

class Solution {
  public:
    vector<int> findStartingPoint(int x, int y, vector<vector<int>> pathCoordinates) {
        // Code here
        vector<int>ans;
        int j = 1;
        for(int i=0;i<=pathCoordinates.size()-1;i++){
            x -= pathCoordinates[i][0];
            y -= pathCoordinates[i][j];
        }
        
        ans.push_back(x);
        ans.push_back(y);
        
        return ans;
        
        
        
        
        
    }
};