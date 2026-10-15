// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution {
    fun sumCounts(nums: List<Int>): Int {
        val n: Int = nums.size
        var ans: Int = 0
        for (i: Int in 0 until n) {
            val s: HashSet<Int> = HashSet<Int>()
            for (j: Int in i until n) {
                s.add(nums[j])
                ans += s.size * s.size
            }
        }
        return ans
    }
}