// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
class Solution {
    public int countPartitions(int[] nums) {
        int sum = 0, ans = nums.length - 1;
        for (final int num : nums) {
            sum += num;
        }
        if (sum % 2 == 0) {
            return ans;
        } else {
            return 0;
        }
    }
}