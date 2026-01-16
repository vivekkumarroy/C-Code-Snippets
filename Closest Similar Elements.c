/*  Geek has an integer array arr of size n and integers indexDifference, valueDifference. Geek needs to find a pair of indexes (i, j) which follows all the given conditions

i != j
abs(i - j) <= indexDifference
abs(Arr[i] - Arr[j]) <= valueDifference
Geek needs your help to find out if such a pair, return True if such a pair exists else return False.

Examples :

Input: n = 4, arr[] = {1, 2, 3, 1}, indexDifference = 3, valueDifference = 0
Output: True
Explanation: The index i = 0 and j = 3 follows all the given conditions hence the output is True.
Input: n = 6, arr[] = {1, 5, 9, 1, 5, 9}, indexDifference = 2, valueDifference = 3
Output: False
Explanation: No pair of indexes follow all the given conditions hence the output is False.
Expected Time Complexity: O(nlogn)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ n ≤ 105
-109 ≤ arr[i] ≤ 109  */





class Solution {
public:
    bool closestSimilarElements(int n, vector<int>& arr,
                                int indexDifference, int valueDifference) {
        multiset<long long> window;

        for (int i = 0; i < n; i++) {
            if (i > indexDifference) {
                window.erase(window.find(arr[i - indexDifference - 1]));
            }

            auto it = window.lower_bound((long long)arr[i] - valueDifference);
            if (it != window.end() && *it <= (long long)arr[i] + valueDifference) {
                return true;
            }

            window.insert(arr[i]);
        }
        return false;
    }
};
