// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
class Solution {
    fun minimumDistance(nums: IntArray): Int {
        val n: Int = nums.size
        var ans: Int = Int.MAX_VALUE
        for (i: Int in 0 until n - 2) {
            for (j: Int in i + 1 until n - 1) {
                for (k: Int in j + 1 until n) {
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        ans = minOf(ans, Math.abs(i - j) + Math.abs(j - k) + Math.abs(k - i))
                    }
                }
            }
        }
        return if (ans == Int.MAX_VALUE) -1 else ans
    }
}