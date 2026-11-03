// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
class Solution {
    fun minMoves(nums: IntArray): Int {
        val n: Int = nums.size
        var mx: Int = 0
        for (i: Int in 0 until n) {
            mx = maxOf(mx, nums[i])
        }
        var ans: Int = 0;
        for (i: Int in 0 until n) {
            ans += mx - nums[i]
        }
        return ans
    }
}