// Problem: Smallest Stable Index II
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-ii/
class Solution {
    fun firstStableIndex(nums: IntArray, k: Int): Int {
        val n: Int = nums.size
        val mn: IntArray = IntArray(n)
        val mx: IntArray = IntArray(n)
        mx[0] = nums[0]
        for (i: Int in 1 until n) {
            mx[i] = maxOf(mx[i - 1], nums[i])
        }
        mn[n - 1] = nums[n - 1]
        for (i: Int in n - 2 downTo 0) {
            mn[i] = minOf(mn[i + 1], nums[i])
        }
        for (i: Int in 0 until n) {
            if (mx[i] - mn[i] <= k) {
                return i
            }
        }
        return -1
    }
}