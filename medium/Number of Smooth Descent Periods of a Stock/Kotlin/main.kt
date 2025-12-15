// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
class Solution {
    fun getDescentPeriods(prices: IntArray): Long {
        var ans: Long = 0
        var count: Long = 1
        for (i in 1 until prices.size) {
            if (prices[i] == prices[i - 1] - 1) {
                count++
            } else {
                ans += (count * (count + 1) / 2)
                count = 1
            }
        }
        ans += (count * (count + 1) / 2)
        return ans
    }
}