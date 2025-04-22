// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
class Solution {
    fun minOperations(nums: IntArray, k: Int): Int {
        var ans = 0;
        for (i in nums.indices)
        {
            if (nums[i] < k)
            {
                ans++;
            }
        }
        return ans;
    }
}