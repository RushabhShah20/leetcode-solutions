// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
class Solution {
    fun longestSubsequence(nums: IntArray): Int {
        val n: Int = nums.size
        var x: Int = 0
        var y: Boolean = true
        for (i: Int in 0 until n) {
            x = x xor nums[i]
            if (nums[i] > 0) {
                y = false
            }
        }
        if (x > 0) {
            return n
        }
        val ans: Int = if (y) 0 else n - 1
        return ans
    }
}