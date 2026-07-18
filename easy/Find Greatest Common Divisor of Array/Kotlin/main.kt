// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution {
    fun gcd(a: Int, b: Int): Int {
        return if (b == 0) a else gcd(b, a % b)
    }

    fun findGCD(nums: IntArray): Int {
        val n: Int = nums.size
        var mx: Int = 0
        var mn: Int = 1001
        for (i in 0 until n) {
            mx = maxOf(mx, nums[i])
            mn = minOf(mn, nums[i])
        }
        val ans: Int = gcd(mx, mn)
        return ans
    }
}