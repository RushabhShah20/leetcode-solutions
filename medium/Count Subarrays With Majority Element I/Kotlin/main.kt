// Problem: Count Subarrays With Majority Element I
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
class Solution {
    fun countMajoritySubarrays(nums: IntArray, target: Int): Int {
        val ans: Int
        var ansMutable: Int = 0
        val n: Int = nums.size
        for (k: Int in 1..n) {
            var count: Int = 0
            for (i: Int in 0 until n) {
                if (i >= k) {
                    if (nums[i] == target) {
                        count++
                    }
                    if (nums[i - k] == target) {
                        count--
                    }
                } else {
                    if (nums[i] == target) {
                        count++
                    }
                }
                if (i >= k - 1) {
                    if (2 * count > k) {
                        ansMutable++
                    }
                }
            }
        }
        ans = ansMutable
        return ans
    }
}