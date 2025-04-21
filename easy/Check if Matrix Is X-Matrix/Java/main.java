// Problem: Check if Matrix Is X-Matrix
// Link to the problem: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
class Solution {
    public boolean checkXMatrix(int[][] grid) {
        boolean ans = false, ans_diag = true, ans_non_diag = true;
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (i == j || i + j == (grid.length - 1)) {
                    if (grid[i][j] == 0) {
                        ans_diag = false;
                    }
                } else {
                    if (grid[i][j] != 0) {
                        ans_non_diag = false;
                    }
                }
            }
        }
        if (ans_diag == true && ans_non_diag == true) {
            ans = true;
        }
        return ans;
    }
}