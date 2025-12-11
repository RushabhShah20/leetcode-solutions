// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
class Solution {
    public int countCoveredBuildings(int n, int[][] buildings) {
        int[] maxRow = new int[n + 1], minRow = new int[n + 1], maxCol = new int[n + 1], minCol = new int[n + 1];
        Arrays.fill(minCol, n + 1);
        Arrays.fill(minRow, n + 1);
        for (final int[] building : buildings) {
            int x = building[0], y = building[1];
            maxRow[y] = Math.max(maxRow[y], x);
            minRow[y] = Math.min(minRow[y], x);
            maxCol[x] = Math.max(maxCol[x], y);
            minCol[x] = Math.min(minCol[x], y);
        }
        int ans = 0;
        for (final int[] building : buildings) {
            int x = building[0], y = building[1];
            if (x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x]) {
                ans++;
            }
        }
        return ans;
    }
}