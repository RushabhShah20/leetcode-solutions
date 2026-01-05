// Problem: Projection Area of 3D Shapes
// Link to the problem: https://leetcode.com/problems/projection-area-of-3d-shapes/
class Solution {
    public int projectionArea(int[][] grid) {
        final int n = grid.length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int a = 0, b = 0;
            for (int j = 0; j < n; j++) {
                a = Math.max(a, grid[i][j]);
                b = Math.max(b, grid[j][i]);
                if (grid[i][j] > 0) {
                    ans++;
                }
            }
            ans += (a + b);
        }
        return ans;
    }
}