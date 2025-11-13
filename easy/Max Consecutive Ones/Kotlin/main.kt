// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
class Solution {
    fun findMaxConsecutiveOnes(nums: IntArray): Int {
        var ans:Int = 0
        var count:Int = 0
        for (i in 0..<nums.size)
        {
            if (nums[i] == 1)
            {
                count++
                ans = max(ans, count)
            }
            else
            {
                count = 0
            }
        }
        return ans
    }
}