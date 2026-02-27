// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
class Solution {
    public int diagonalSum(int[][] mat) {
        final int n = mat.length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mat[i][i];
            if (i != n - 1 - i) {
                ans += mat[i][n - i - 1];
            }
        }
        return ans;
    }
}