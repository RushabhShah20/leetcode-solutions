// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
class Solution {
    fun maxTotalValue(nums: IntArray, k: Int): Long {
        val maxElement: Int = nums.max()
        val minElement: Int = nums.min()
        val ans: Long = k.toLong() * (maxElement - minElement).toLong()
        return ans
    }
}