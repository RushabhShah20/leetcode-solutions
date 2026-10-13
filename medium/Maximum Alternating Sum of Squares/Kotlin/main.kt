// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
class Solution {
    fun maxAlternatingSum(nums: IntArray): Long {
        val n: Int = nums.size
        var ans: Long = 0
        for (i: Int in 0 until n) {
            nums[i] *= nums[i]
        }
        nums.sort()
        for (i: Int in 0 until n) {
            if (i < (n shr 1)) {
                ans -= nums[i]
            } else {
                ans += nums[i]
            }
        }
        return ans;
    }
}