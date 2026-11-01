// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
class Solution {
    fun minMoves(nums: IntArray): Int {
        val n: Int = nums.size
        var ans: Int = 0
        var mn: Int = 1000000001
        for (i: Int in 0 until n) {
            mn = minOf(mn, nums[i])
        }
        for (i: Int in 0 until n) {
            ans += nums[i] - mn
        }
        return ans
    }
}