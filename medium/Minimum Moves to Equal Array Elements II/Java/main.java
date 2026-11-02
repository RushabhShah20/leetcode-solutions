// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution {
    public int minMoves2(int[] nums) {
        final int n = nums.length;
        int ans = 0, l = 0, r = n - 1;
        Arrays.sort(nums);
        while (l <= r) {
            ans += nums[r] - nums[l];
            l++;
            r--;
        }
        return ans;
    }
}