// Problem: XOR After Range Multiplication Queries I
// Link to the problem: https://leetcode.com/problems/xor-after-range-multiplication-queries-i/
class Solution {
    public int xorAfterQueries(int[] nums, int[][] queries) {
        final int mod = 1000000007;
        for (final int[] query : queries) {
            for (int i = query[0]; i <= query[1]; i += query[2]) {
                nums[i] = (int) (((long) nums[i] * (long) query[3]) % mod);
            }
        }
        int ans = 0;
        for (final int num : nums) {
            ans ^= num;
        }
        return ans;
    }
}