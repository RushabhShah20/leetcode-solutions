// Problem: Construct the Minimum Bitwise Array II
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/
class Solution {
    public int[] minBitwiseArray(List<Integer> nums) {
        final int n = nums.size();
        int[] ans = new int[n];
        for (int i = 0; i < n; i++) {
            if (nums.get(i) % 2 == 0) {
                ans[i] = -1;
            } else {
                ans[i] = nums.get(i) - (((nums.get(i) + 1) & (-nums.get(i) - 1)) / 2);
            }
        }
        return ans;
    }
}