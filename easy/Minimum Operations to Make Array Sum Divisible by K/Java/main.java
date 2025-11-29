// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
class Solution {
    public int minOperations(int[] nums, int k) {
        int sum = 0;
        for (final int num : nums) {
            sum += num;
        }
        int ans = sum % k;
        return ans;
    }
}