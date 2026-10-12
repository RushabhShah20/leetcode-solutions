// Problem: Apply Operations on Array to Maximize Sum of Squares
// Link to the problem: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/
class Solution {
    fun maxSum(nums: List<Int>, k: Int): Int {
        val n: Int = nums.size
        val m: Long = 1000000007L
        val a: IntArray = IntArray(30)
        for (i: Int in 0 until n) {
            for (j: Int in 0 until 30) {
                a[j] += (nums[i] shr j) and 1
            }
        }
        var ans: Long = 0L
        for (i: Int in 0 until k) {
            var x: Long = 0L
            for (j: Int in 29 downTo 0) {
                if (a[j] > 0) {
                    x = x or (1L shl j)
                    a[j]--
                }
            }
            ans = (ans + x * x) % m
        }
        return ans.toInt()
    }
}