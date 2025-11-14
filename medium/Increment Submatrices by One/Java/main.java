// Problem: Increment Submatrices by One
// Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
class Solution {
    public int[][] rangeAddQueries(int n, int[][] queries) {
        int[][] prefix = new int[n + 1][n + 1];
        for (int[] query : queries) {
            for (int i = query[0]; i <= query[2]; i++) {
                prefix[i][query[1]]++;
                prefix[i][query[3] + 1]--;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                prefix[i][j] += prefix[i][j - 1];
            }
        }
        int[][] ans = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = prefix[i][j];
            }
        }
        return ans;
    }
}