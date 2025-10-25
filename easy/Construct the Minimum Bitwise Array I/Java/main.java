// Problem: Construct the Minimum Bitwise Array I
// Link to the problem: https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/
class Solution {
    public int[] minBitwiseArray(List<Integer> nums) {
        int n = nums.size();
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