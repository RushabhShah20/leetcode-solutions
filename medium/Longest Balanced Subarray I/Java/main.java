// Problem: Longest Balanced Subarray I
// Link to the problem: https://leetcode.com/problems/longest-balanced-subarray-i/
class Solution {
    public int longestBalanced(int[] nums) {
        final int n = nums.length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            Set<Integer> even = new HashSet<Integer>(), odd = new HashSet<Integer>();
            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0) {
                    even.add(nums[j]);
                } else {
                    odd.add(nums[j]);
                }
                if (even.size() == odd.size()) {
                    ans = Math.max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
}