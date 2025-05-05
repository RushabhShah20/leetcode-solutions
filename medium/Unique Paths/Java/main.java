// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
class Solution {
    public int uniquePaths(int m, int n) {
        long ans = 1;
        int down_moves = m - 1, right_moves = n - 1;
        int x = Math.max(down_moves, right_moves), y = Math.min(down_moves, right_moves);
        for (int i = 1; i <= y; i++) {
            ans *= (x + i);
            ans /= i;
        }
        return (int) ans;
    }
}