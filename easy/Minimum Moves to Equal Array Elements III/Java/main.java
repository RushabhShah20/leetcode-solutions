// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
class Solution {
    public int minMoves(int[] nums) {
        final int n = nums.length;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = Math.max(mx, nums[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mx - nums[i];
        }
        return ans;
    }
}