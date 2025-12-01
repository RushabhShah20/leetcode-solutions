// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
class Solution {
    public int maxCount(int m, int n, int[][] ops) {
        for (final int[] op : ops) {
            m = Math.min(m, op[0]);
            n = Math.min(n, op[1]);
        }
        final int ans = m * n;
        return ans;
    }
}