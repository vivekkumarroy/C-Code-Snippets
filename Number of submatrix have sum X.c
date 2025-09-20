/* Given a matrix mat[][] of size n × m and an integer x, find the number of square submatrices whose sum of elements is equal to x.

Examples:

Input: mat[][] = [[2, 4, 7, 8, 10], [3, 1, 1, 1, 1], [9, 11, 1, 2, 1], [12, -17, 1, 1, 1]], x = 10
Output: 3
Explanation: The sub-squares whose sum of elements = 10, are colored in the matrix.

Input: mat[][] = [[3, 3, 5, 3], [2, 2, 2, 6], [11, 2, 2, 4]], x = 1
Output: 0
Explanation: There is no sub-squares whose sum of elements is 1.
Constraints:
1 ≤ n, m ≤ 100
-103 ≤ mat[i] ≤ 103
-109 ≤ x ≤ 109   */





int n = mat.size();
        int m = mat[0].size();

        // Create prefix sum matrix with 1 extra row and column
        vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));

        // Build prefix sum matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                prefix[i + 1][j + 1] = mat[i][j] + prefix[i][j + 1] + prefix[i + 1][j] - prefix[i][j];
            }
        }

        int count = 0;

        // Try all square sizes from 1x1 to min(n, m)xmin(n, m)
        for (int k = 1; k <= min(n, m); ++k) {
            for (int i = k; i <= n; ++i) {
                for (int j = k; j <= m; ++j) {
                    int total = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
                    if (total == x) {
                        count++;
                    }
                }
            }
        }

        return count;