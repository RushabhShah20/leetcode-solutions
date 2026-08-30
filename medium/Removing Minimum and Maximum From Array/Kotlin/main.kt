// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
class Solution {
    fun minimumDeletions(nums: IntArray): Int {
        val n: Int = nums.size
        var x: Int = 0
        var y: Int = 0
        for (i: Int in 0 until n) {
            if (nums[i] > nums[x]) {
                x = i
            } else if (nums[i] < nums[y]) {
                y = i
            }
        }
        val a: Int = maxOf(x, y) + 1
        val b: Int = n - minOf(x, y)
        val c: Int = (minOf(x, y) + 1) + (n - maxOf(x, y))
        val ans: Int = minOf(a, b, c)
        return ans
    }
}