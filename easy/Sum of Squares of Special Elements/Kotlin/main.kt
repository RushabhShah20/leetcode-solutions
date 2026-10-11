// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
class Solution {
    fun sumOfSquares(nums: IntArray): Int {
        val n: Int = nums.size
        var ans: Int = 0
        var i: Int = 1
        while (i * i <= n) {
            if (n % i == 0) {
                ans += nums[i - 1] * nums[i - 1]
                if (i * i != n) {
                    ans += nums[n / i - 1] * nums[n / i - 1]
                }
            }
            i++
        }
        return ans;
    }
}