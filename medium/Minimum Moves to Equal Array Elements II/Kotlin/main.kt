// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution {
    fun minMoves2(nums: IntArray): Int {
        val n: Int = nums.size
        var ans: Int = 0
        var l: Int = 0
        var r: Int = n - 1
        nums.sort()
        while (l <= r) {
            ans += nums[r] - nums[l]
            l++
            r--
        }
        return ans
    }
}