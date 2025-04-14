// Problem: Find Missing and Repeated Values
// Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int[] freq = new int[grid.length * grid[0].length];
        Arrays.fill(freq, 0);
        int[] ans = new int[2];
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                freq[grid[i][j] - 1]++;
            }
        }
        for (int i = 0; i < freq.length; i++) {
            if (freq[i] == 0) {
                ans[1] = i + 1;
            }
            if (freq[i] == 2) {
                ans[0] = i + 1;
            }
        }
        return ans;
    }
}