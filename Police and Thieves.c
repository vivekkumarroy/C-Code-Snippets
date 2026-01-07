/*  Given an array arr[], where each element contains either a 'P' for policeman or a 'T' for thief. Find the maximum number of thieves that can be caught by the police. 
Keep in mind the following conditions :

Each policeman can catch only one thief.
A policeman cannot catch a thief who is more than k units away from him.
Examples:

Input: arr[] = ['P', 'T', 'T', 'P', 'T'], k = 1
Output: 2
Explanation: Maximum 2 thieves can be caught. First policeman catches first thief and second police man can catch either second or third thief.
Input: arr[] = ['T', 'T', 'P', 'P', 'T', 'P'], k = 2
Output: 3
Explanation: Maximum 3 thieves can be caught.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ k ≤ 1000
arr[i] = 'P' or 'T'  */



class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        vector<int> p;
        vector<int> t;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 'P') p.push_back(i);
            else t.push_back(i);
        }
        int count = 0,p1 = 0,p2 = 0;
        
        while(p1 < p.size() &&  p2 < t.size()){
            if(abs(p[p1] - t[p2]) <= k) {
                count++;
                p1++;
                p2++;
                
            }
            else if(p[p1] < t[p2]) p1++;
            else p2++;
        }
        return count;
    }
};