// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
class Solution {
    fun longestMonotonicSubarray(nums: IntArray): Int {
        val n: Int = nums.size
        var a: Int = 1
        var b: Int = 1
        var c: Int = 1
        var d: Int = 1
        for (i: Int in 1 until n) {
            if (nums[i] > nums[i - 1]) {
                c++
                a = max(a, c)
                d = 1
            } else if (nums[i] < nums[i - 1]) {
                d++
                b = max(b, d)
                c = 1
            } else {
                c = 1
                d = 1
            }
        }
        val ans: Int = max(a, b)
        return ans
    }
}