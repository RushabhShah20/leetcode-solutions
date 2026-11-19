// Problem: Minimum Score by Changing Two Elements
// Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
class Solution {
    fun minimizeSum(nums: IntArray): Int {
        val n: Int = nums.size
        var mn1: Int = 1000000001
        var mn2: Int = 1000000001
        var mn3: Int = 1000000001
        var mx1: Int = 0
        var mx2: Int = 0
        var mx3: Int = 0;
        for (i: Int in 0 until n) {
            if (mn1 > nums[i]) {
                mn3 = mn2
                mn2 = mn1
                mn1 = nums[i]
            } else if (mn2 > nums[i]) {
                mn3 = mn2
                mn2 = nums[i]
            } else if (mn3 > nums[i]) {
                mn3 = nums[i]
            }
            if (mx1 < nums[i]) {
                mx3 = mx2
                mx2 = mx1
                mx1 = nums[i]
            } else if (mx2 < nums[i]) {
                mx3 = mx2
                mx2 = nums[i]
            } else if (mx3 < nums[i]) {
                mx3 = nums[i]
            }
        }
        val a: Int = mx3 - mn1
        val b: Int = mx1 - mn3
        val c: Int = mx2 - mn2
        val ans: Int = minOf(a, minOf(b, c))
        return ans
    }
}