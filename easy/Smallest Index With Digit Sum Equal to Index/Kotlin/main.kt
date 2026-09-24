// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
class Solution {
    fun sum(n: Int): Int {
        var m: Int = n;
        var ans: Int = 0;
        while (m > 0) {
            ans += m % 10;
            m /= 10;
        }
        return ans;
    }

    fun smallestIndex(nums: IntArray): Int {
        val n: Int = nums.size
        for (i: Int in 0 until n) {
            if (sum(nums[i]) == i) {
                return i
            }
        }
        return -1
    }
}