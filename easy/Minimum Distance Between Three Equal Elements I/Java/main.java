// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
class Solution {
    public int minimumDistance(int[] nums) {
        int n = nums.length;
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (i != j && j != k && i != k) {
                        if (nums[i] == nums[j] && nums[j] == nums[k]) {
                            ans = Math.min(ans, Math.abs(i - j) + Math.abs(j - k) + Math.abs(k - i));
                        }
                    }
                }
            }
        }
        return ((ans == Integer.MAX_VALUE) ? (-1) : (ans));
    }
}