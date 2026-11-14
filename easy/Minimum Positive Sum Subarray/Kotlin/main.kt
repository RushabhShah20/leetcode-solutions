// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
class Solution {
    fun minimumSumSubarray(nums: List<Int>, l: Int, r: Int): Int {
        val n: Int = nums.size
        var z: Int = 100001
        for (i: Int in 0 until n) {
            var x: Int = 0
            for (j: Int in i until n) {
                x += nums[j]
                val y: Int = j - i + 1
                if (x > 0 && y >= l && y <= r) {
                    z = minOf(z, x)
                }
            }
        }
        val ans: Int = if (z == 100001) -1 else z
        return ans;
    }
}