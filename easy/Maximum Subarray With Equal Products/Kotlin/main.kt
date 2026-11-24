// Problem: Maximum Subarray With Equal Products
// Link to the problem: https://leetcode.com/problems/maximum-subarray-with-equal-products/
class Solution {
    fun gcd(a: Int, b: Int): Int {
        if (b == 0) {
            return a
        } else {
            return gcd(b, a % b)
        }
    }

    fun maxLength(nums: IntArray): Int {
        val n: Int = nums.size
        var ans: Int = 2
        var x: Int = 1
        var i: Int = 0
        for (j: Int in 0 until n) {
            while (gcd(x, nums[j]) > 1) {
                x /= nums[i]
                i++
            }
            x *= nums[j]
            ans = maxOf(ans, j - i + 1)
        }
        return ans
    }
}